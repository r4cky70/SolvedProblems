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
const int MAXS = 100007;
 
void solve(){
 
  int n;
  cin >> n;
  vi arr(n);
  for(int& i : arr){
    cin >> i;
  }
  vi dp(n);
  fill(all(dp), 0);
  for(int i = 0; i < n; ++i){
    if(i == 0)dp[i] = 0;
    else if(i == 1) dp[i] = abs(arr[i-1] - arr[i]);
    else dp[i] = min(abs(arr[i - 1] - arr[i]) + dp[i-1], abs(arr[i-2] - arr[i]) + dp[i-2]);
  }
  for(int& i : dp) debug(i);
  cout << dp[n-1] << endl;
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