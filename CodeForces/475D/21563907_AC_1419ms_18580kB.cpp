#include <bits/stdc++.h>
#define MAXS 100007
#define INF 2147483647

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int bch = no*2, mid = (l+r)/2
#define all(a) a.begin(), a.end()

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;
#define FASTIO ios::sync_with_stdio(false); cin.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 

int n, q;
int arr[MAXS];
int spt[MAXS][26];

int merge(int a, int b) {return __gcd(a, b);}

void build(){
  for(int i = 0; i < n; ++i) spt[i][0] = arr[i];
  for(int i = 1;(1<<i) <= n; ++i){
    for(int j = 0; j+(1<<i) <= n; ++j){
      spt[j][i] = merge(spt[j][i-1], spt[j+(1<<i-1)][i-1]);
    }
  }
}
int query(int l, int r){
  if(l > r) swap(l, r);
  int lg = __builtin_clz(1) - __builtin_clz(r-l+1);
  return merge(spt[l][lg], spt[r-(1<<lg)+1][lg]);
}


map<int, ll> ans;

ll busca(int id, int l, int r, int re){
  int a = id;
  int x = l - id;
  while(l <= r){
    int mid = (l+r)/2;
    if(query(id, mid) == re){
      a = mid;
      l = mid+1;
    }else r = mid-1;
  }
  ans[re] += a-id+1-x;
  return a+1;
}



int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cin >> q;
  build();
  for(int i = 0; i < n; ++i){ 
    int l = i, r = n-1;
    do{
      int re = query(i, l);
      l = busca(i, l, r, re);
    }while(l < n);


  }
  int a;
  while(q--){
    cin >> a;
    cout << ans[a] << endl;
  }
  
  
}