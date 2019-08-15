#include <bits/stdc++.h>
#define MAXS 100007
#define INF 1234567890

#define make_pair(a, b) mp(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

int n, q;

struct node{
  int rock;
  int paper;
  int scisor;
  node(){rock = 0;paper = 0; scisor = 0;}
  node(int a, int b, int c){
    paper = b; scisor = c; rock = a;
  }
};

node merge(node a, node b){
  return node(a.rock +b.rock, a.paper+b.paper, a.scisor+b.scisor);
}

struct segtree{
  node tree[MAXS*4];
  int lazy[MAXS*4];

  void push(int no, int l, int r){
    if(l == r){
      lazy[no*2] = lazy[no];
      lazy[no*2+1] = lazy[no];
    }
    if(lazy[no]%3 == 1){
      swap(tree[no].rock, tree[no].scisor);
      swap(tree[no].paper, tree[no].scisor);
    }else if(lazy[no]%3 == 2){
      swap(tree[no].paper, tree[no].scisor);
      swap(tree[no].rock, tree[no].scisor);
    }
    lazy[no] = 0;
  }


  void build(int no, int l, int r){
    lazy[no] = 0;
    if(l == r){
      tree[no] = node();
    }else{
      int mid = (l+r)/2;
      build(no*2, l, mid);
      build(no*2+1, mid+1, r);
      tree[no] = merge(tree[no*2], tree[no*2+1]);
    }
  }
  void update(int no, int l, int r, int x, int y){
    if(l > y || r < x){
      push(no, l, r);
    }else if(r <= y && l >= x){
      lazy[no]++;
      push(no, l, r);
    }else{
      push(no, l, r);
      int mid = (l+r)/2;
      update(no*2, l, mid, x, y);
      update(no*2+1, mid+1, r, x, y);
      merge(tree[no*2], tree[no*2+1]);
    }
  }
  node query(int no, int l, int r, int x, int y){
    push(no, l, r);
    if(l > y || r < x){
      return node();
    }else if(r <= y && l >= x){
      return tree[no];
    }else{
      int mid = (l+r)/2;
      return merge(query(no*2, l, mid, x, y), query(no*2+1, mid+1, r, x, y));
    }
  }
}root;



int main(){
  while(cin >> n){
    cin >>
    int a, b, c;
    root.build(1, 0, n-1);
    for(int i = 0; i < q; ++i){
      cin >> a >> b >> c;
      if(a == 'C'){
        node ans = root.query(1, 0, n-1, b-1, c-1);
        cout << ans.rock << " " << ans.paper << " " << ans.scisor << "\n";
      }else{
        root.update(1, 0, n-1, b-1, c-1);
      }
    }

  }
}