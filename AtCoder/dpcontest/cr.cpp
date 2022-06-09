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
 
array<array<int,3>,MAXS> arr;
int dp[MAXS][3];
int n;

int solve(int id, int past){

  if(past != -1 && dp[id][past] != -1) return dp[id][past];
  if(id >= n) return dp[id][past] = 0;
  int ans = 0;
  for(int i = 0; i < 3; ++i){
    if(i != past){
      ans = max(solve(id+1, i)+arr[id][i], ans);
    }
  }
  return dp[id][past] = ans;
}



void solve(){

  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
  }
  for(auto& i : dp) for(auto& v : i) v = -1;
  cout << solve(0, -1) << endl;
  
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
