#include <bits/stdc++.h>
#define MAXS 100007
#define INF 2147483647

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, m;
int arr[MAXS];

int oper(int a, int b){
  if(a == 0 || b == 0) return 0;
  if(a > 0 && b > 0) return 1;
  if(a < 0 && b < 0) return 1;
  else return -1;
}

struct segtree{
  int tree[4*MAXS];
  void build(int no, int l, int r){
    if(l == r) tree[no] = arr[l];
    else{
      int mid = (l+r)/2;
      build(no*2, l, mid);
      build(no*2+1, mid+1, r);
      tree[no] = oper(tree[no*2], tree[no*2+1]);
    }
  }
  void update(int no, int l, int r, int x, int v){
    if(l == r) tree[no] = v;
    else{
      int mid = (l+r)/2;
      if(mid >= x) update(no*2, l, mid, x, v);
      else update(no*2+1, mid+1, r, x, v);
      tree[no] = oper(tree[no*2+1], tree[no*2]);
    }
  }
  int query(int no, int l, int r, int a, int b){
    if(a > r || b < l) return 1;
    if(l >= a && r <= b) return tree[no];
    int mid = (l+r)/2;
    return oper(query(no*2, l, mid, a, b), query(no*2+1, mid+1, r, a, b));
  }
}root;




int main(){
  
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  while(cin >> n >> m){
    for(int i =  0; i < n; ++i){
      cin >> arr[i];
    }
    root.build(1, 0, n-1);
    char alo;
    int a, b;
    for(int i = 0; i < m; ++i){
      cin >> alo >>  a  >> b;
      if(alo == 'C') root.update(1, 0, n-1, a-1, b);
      else {
        int temp = root.query(1, 0, n-1, a-1, b-1);
        if(temp == -1) cout << '-';
        else if(temp == 1) cout << '+';
        else cout << temp;
      }
    }
    cout << '\n';
  }
}