#include <bits/stdc++.h>
#define MAXS 200007
#define INF 2234567890

#define make_pair(a, b) mp(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

string s, t;
int ans;

int dp[1000][1000];

int solve(int i, int acu, int bt,  int id){
    if(dp[i][id] != -1) return dp[i][id];
    if(i == s.size()) return dp[i][id] = 0;
    
    if(s[i] == t[id]){
      return dp[i][id] = max(acu, solve(i+1, 0, id+1));
    }else{
      return dp[i][id] = max(acu, solve(i+1, acu+1, id));
    }
}





int main(){
  cin >> s;
  cin >> t;
  ans = 0;
  memset(dp, -1, sizeof dp);
  solve(0, 0, 0);
  for(int i = 0; i < 1000; ++i){
    ans = max(dp[i][t.size()-1], ans);
  }
  cout << ans << endl;
}