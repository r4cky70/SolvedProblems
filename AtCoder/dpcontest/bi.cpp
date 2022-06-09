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
 
  int n, k;
  cin >> n >> k;
  vi arr(n);
  for(int& i : arr){
    cin >> i;
  }
  vi dp(n, -1);
  for(int i = 0; i < n; ++i){
    if(i==0) dp[i] = 0;
    else{
      dp[i] = INF;
      for(int j = max(0, i-k); j < i; ++j){
        dp[i] = min(abs(arr[j] - arr[i])+dp[j], dp[i]);
      }
    }
  }
  // for(int& i : dp) debug(i);
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