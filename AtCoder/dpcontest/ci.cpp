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

int n;
int arr[MAXS][3];
array<array<int,3>,MAXS>dp;



void solvetask(){

  for(auto& e : arr) for(auto& v : e) v=-1;
  cin >> n;
  for(int i = 0;i < n; ++i){
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < 3; ++j){
      if(i == 0) dp[i][j] = arr[i][j];
      else{
        for(int k = 0; k < 3; ++k){
          if(k != j) dp[i][j] = max(dp[i-1][k] + arr[i][j], dp[i][j]);
        }
      }
    }
  }
  // for(int i = 0; i < n; ++i){
  //   cout << dp[i][0] << endl;
  // }
  cout << max(max(dp[n-1][2], dp[n-1][1]), dp[n-1][0]) << endl;
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
