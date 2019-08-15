#include <bits/stdc++.h>
#define INF 1234567890
#define MAXS 27

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int t, a, b, x;
int lista[MAXS];
int dp[1000007][30];

int solve(int cota, int ind){
  if(dp[cota][ind] != -1) return dp[cota][ind];
  if(ind >= a) return 0;
  if(cota == 0) return 0;
  for(int i = ind; i < a; ++i){
    if(cota - lista[ind] >= 0) int temp = solve(cota - lista[ind], ind);
  }
}



int main(){
  cin >> t;
  for(int k = 0; k  < t; ++k){
    cin >> a >> b;
    for(int i = 0; i < a; ++i){
      cin >> x;
    }
    sort(lista, lista+a);
    memset(dp, -1, sizeof(dp));
  }
}