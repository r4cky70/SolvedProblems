#include <bits/stdc++.h>
 
#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<endl
 
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector < int > vi;
typedef vector < ll > vll;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
const int INF = (int)__builtin_inf();
const int MAXS = 200007;
 
array<int,MAXS> arr;
array<int,MAXS> dp;
int n, k;
 
ll f(int id){
  if(dp[id] != -1) return dp[id];
  if(id == n-1) return dp[id] = 0;
  else{
    ll ans = INF;
    for(int i = 1; i <= k && id+i < n; ++i){
      ans = min(f(id+i)+llabs(arr[id]-arr[id+i]), ans);
    }
    return dp[id] = ans;
  }
 
}
 
 
void solve(){
 
  cin >> n >> k;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  fill(dp.begin(), dp.begin()+n,-1);
  cout << f(0) << endl;
  // for(int i = 0; i < n; ++i) debug(dp[i]);
 
}
 
int main(){
  cout.precision(12);
  cout << fixed;
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  solve();
  cerr << "Time: " << 1.0*clock()/CLOCKS_PER_SEC << " s.\n";
#else
  ios::sync_with_stdio(false);cin.tie(0);
  int t = 1;
  // cin >> t;
  while(t--) solve();
#endif
}