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
 
array<ll, MAXS> arr;
int n;
array<ll, MAXS> dp;
 
ll btrack(int id){
  if(dp[id] != -1) return dp[id];
  if(id == n-1) return 0;
  if(id >= n) return MAXS;
  if(n == n-2) return abs(arr[id] - arr[id+1])+btrack(id+1);
  return dp[id] = min(abs(arr[id] - arr[id+1])+btrack(id+1), abs(arr[id]-arr[id+2])+btrack(id+2));
}
 
 
void solve(){
 
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  fill(all(dp), -1);
  cout << btrack(0) << endl;
 
 
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
  solve();
#endif
}