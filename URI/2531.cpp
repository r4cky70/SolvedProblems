#include <bits/stdc++.h>
#define MAXS 100007
#define INF 1234567890

#define mp(a, b) make_pair(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

int n, q;
int arr[MAXS];

pii merge(pii a, pii b){
  pii temp;
  temp.first = min(a.first, b.first);
  temp.second =  max(a.second, b.second);
  return temp;
}




struct segtree{
  pii tree[4*MAXS];

  void build(int no, int l, int r){
    if(l == r){
      tree[no] = mp(arr[l], arr[l]);
    }else {
      int mid = (l+r)>>1;
      build(no<<1, l, mid);
      build((no<<1)+1, mid+1, r);
      tree[no] = merge(tree[no<<1], tree[(no<<1)+1]);
    }
    // cout  << tree[no].first << "        " << tree[no].second << endl;
  }
  void update(int no, int l, int r, int x, int v){
    if(l == r){
      tree[no] = mp(v, v);
    }else{
      int mid = (l+r)>>1;
      if(x > mid){
        update((no<<1)+1, mid+1, r, x, v);
      }else{
        update(no<<1, l, mid, x, v);
      }
      tree[no] = merge(tree[no<<1], tree[(no<<1)+1]);
    }
  }
  pii query(int no, int l, int r, int x, int y){
    if(l > y || r < x){
      return make_pair(INF, 0);
    }else if(l >= x && r <= y){
      return tree[no];
    }else{
      int mid = (l+r)>>1;
      return merge(query(no<<1, l , mid, x, y), query((no<<1)+1, mid+1, r, x, y));
    }
  }
}root;




int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  while(cin >> n){
    for(int i = 0; i < n; ++i){
      cin >> arr[i];
    }
    root.build(1, 0, n-1);
    cin >> q;
    int a, b, c;
    for(int i = 0; i < q; ++i){
      cin  >> a >> b >> c;
      if(a == 1){
        root.update(1, 0, n-1, b-1, c);
      }else{
        pii temp = root.query(1, 0, n-1, b-1, c-1);
        cout << temp.second - temp.first << "\n";
      }
    }
  }
}