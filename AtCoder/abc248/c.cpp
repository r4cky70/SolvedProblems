#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) cerr <<"[ ";for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<"]\n";

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MAXS = 100007;
const ll MOD = 998244353;

ll n, m, k;

ll dp[57][2507];


ll solve(ll qn, ll sum){
  if(dp[qn][sum] != -1) return dp[qn][sum];
  if(sum > k) return 0;
  if(qn == n) return dp[qn][sum] = 1;
  
  ll ans = 0;
  for(int i = 1; i <= m; ++i){
    ll x = solve(qn+1, sum+i);
    ans = (x%MOD + ans%MOD)%MOD;
  }
  return dp[qn][sum] = ans;
}

void solvetask(){
  memset(dp, -1, sizeof(dp));
  cin >> n >> m >>k;
  cout << solve(0, 0);
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  // cin >> TT;
  while(TT--) solvetask();
}
