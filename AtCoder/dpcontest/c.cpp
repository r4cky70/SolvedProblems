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
int arr[MAXS][3];
int dp[MAXS][3];

ll solve(int d, int c){
  if(dp[d][c] != -1) return dp[d][c];
  if(d >= n) return 0;
  if(c == 0) return dp[d][c] = max(solve(d+1, 1), solve(d+1, 2)) +arr[d][c];
  else if(c==1) return dp[d][c] = max(solve(d+1, 0), solve(d+1, 2)) + arr[d][c];
  else return dp[d][c] = max(solve(d+1, 0)+arr[d][c], solve(d+1, 1)+arr[d][c]);
}


int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
  }
  memset(dp, -1, sizeof dp);
  solve(0, 0); solve(0, 1), solve(0, 2);
  cout << max(max(dp[0][0], dp[0][1]), dp[0][2]);
}