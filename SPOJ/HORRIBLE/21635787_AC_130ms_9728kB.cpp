#include <bits/stdc++.h>
#define MAXS 100007
#define INF 2147483647
 
#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int bch = no*2, mid = (l+r)/2
#define ALL(a) a.begin(), a.end()
 
using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;
#define FASTIO ios::sync_with_stdio(false); cin.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
int n, t, q;
 
struct segtree{
 
  ll tree[MAXS*4];
  ll lazy[MAXS*4];
  
  void prop(int no, int l, int r){
    tree[no] = tree[no] + (lazy[no] * (r-l+1));
    if(l != r){
      lazy[no*2+1] += lazy[no];
      lazy[no*2] += lazy[no];
    }
    lazy[no] = 0;
  }
 
 
  void build(int no, int l, int r){
    memset(tree, 0,sizeof tree);
    memset(lazy, 0, sizeof lazy);
  }
  void update(int no, int l, int r, int x, int y, ll v){
    if(l > y || r < x){
      prop(no, l, r);
    }else if(l >= x && r <= y){
      lazy[no]+= v;
      prop(no, l, r);
    }else{
      prop(no, l, r);
      int mid = (l+r)/2;
      update(no*2, l, mid, x, y, v);
      update(no*2+1, mid+1, r, x, y, v);
      tree[no] = tree[no*2] + tree[no*2+1];
    }
  }
  ll query(int no, int l, int r, int x, int y){
    prop(no, l, r);
    if(l > y || r < x){
      return 0;
    }else if(l >= x && r <= y){
      return tree[no];
    }else{
      int mid = (l+r)/2;
      return query(no*2, l, mid, x, y) + query(no*2+1, mid+1, r, x, y);
    }
  }
}root;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> t;
  while(t--){
    cin >> n >> q;
    int a, b, c, d;
    root.build(1, 0, n-1);
    for(int i = 0; i < q; ++i){
      cin >> a;
      if(a == 0){
        cin >> b >> c >> d;
        root.update(1, 0, n-1, b-1, c-1, d);
      }else{
        cin >> b >> c;
        cout << root.query(1, 0, n-1, b-1, c-1) << "\n";
      }
    }
  }
}  