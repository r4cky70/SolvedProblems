#include <bits/stdc++.h>
#define MAXS 500007
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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int n, k;
int arr[MAXS];
int dp[MAXS];

ll solve(int i){
  if(i == n) return 0;
  if(i > n) return INF;
  if(dp[i] != -1) return dp[i];
  ll ans = INF;
  for(int j = 1; j <= k; ++j){
    ans = min(ans, solve(i+j) + abs(arr[i] - arr[i+j]));
  }
  return dp[i] = ans;
}



int main(){
  cin >> n >> k;
  for(int i = 1; i <= n; ++i){
    cin >> arr[i];
  }
  arr[0] = arr[1];
  memset(dp, -1, sizeof dp);
  cout << solve(0) << endl;
}