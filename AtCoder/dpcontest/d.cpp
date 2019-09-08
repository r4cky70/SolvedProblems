#include <bits/stdc++.h>
#define MAXS 202007
#define INF 2147483647
 
#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int bch = no*2, mid = (l+r)/2
#define all(a) a.begin(), a.end()
 
using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define FASTIO ios::sync_with_stdio(false);cin.tie(0)

int n, m;

pii arr[MAXS];
ll dp[107][MAXS];

bool func(pii a, pii b){
  if(a.first == b.first) return a.second > b.second;
  return a.first < b.first;
}

ll solve(int id, int p){
  if(dp[id][p] != -1) return dp[id][p];
  else if(p > m) return -arr[id].second;
  else if(id >= n+1) return 0;
  ll ans = 0;
  for(int i = id+1; i <= n; ++i){
    if(p+arr[i].first <= m) ans = max(solve(i, p+arr[i].first) + arr[i].second, ans);
  }
  return dp[id][p] = ans;
}

int main(){
  // clock_t wtf = clock();
  FASTIO;
  cin >> n >> m;
  int a, b;
  for(int i = 1; i <= n; ++i){
    cin >> a>>b;
    arr[i]={a, b};
  }
  sort(arr, arr+n, func);
  for(int i = 0; i <= n+1; ++i){
    fill(dp[i], dp[i]+m, -1);
  }
  // memset(dp, -1, sizeof dp);
  cout << solve(0, 0) << "\n";
  // cout << (double)wtf/(CLOCKS_PER_SEC);
}