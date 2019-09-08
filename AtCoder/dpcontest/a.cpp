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
 
int n;
ll arr[MAXS];
ll dp[MAXS];
 
 
 
int main(){
  // cin >> n;
  // memset(arr, 0, sizeof arr);
  // for(int i = 1; i <= n; ++i){
  //   cin >> arr[i];
  // }
  // memset(dp, -1, sizeof dp);
  // dp[0] = dp[1] = 0;
  // for(int i = 2; i <= n; ++i){
  //   dp[i] = min(dp[i-1]+abs(arr[i]-arr[i-1]), dp[i-2]+abs(arr[i] - arr[i-2]));
  // }
  cin>>n;
    for(int i = 1; i <= n; i++)
        cin>>arr[i];
    dp[1] = 0;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + abs (arr[i] - arr[i-1]);
        if(i > 2){
            dp[i] = min(dp[i], dp[i-2] + abs(arr[i] - arr[i-2]));
        }
    }
    cout << dp[n]<<endl;
  // cout << dp[n] << endl;
}