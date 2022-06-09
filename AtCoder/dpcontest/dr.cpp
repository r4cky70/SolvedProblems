#include <bits/stdc++.h>

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) cerr <<"[ ";for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<"]\n";

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector < int > vi;
typedef vector < ll > vll;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MAXS = 100007;

ll n, w;
vector<pair<ll, ll>> arr;
array<array<ll, MAXS>,107> dp;

ll solve(int id, int peso){
  if(id>= n) return 0;
  if(dp[id][peso] != -1) return dp[id][peso];
  ll ans = solve(id+1, peso);
  if(peso+arr[id].first <= w){
    ans = max(ans, solve(id+1, peso+arr[id].first) + arr[id].second);
  }
  return dp[id][peso] = ans;
}


void solvetask(){

  cin >> n >> w;
  int a, b;
  for(auto& i : dp) for(auto& v : i) v = -1;
  for(int i = 0; i < n; ++i){
    cin >> a >> b;
    arr.push_back({a,b});
  }
  cout << solve(0, 0) << endl;
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
  solvetask();
#endif
}
