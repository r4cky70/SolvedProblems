#include <bits/stdc++.h>
#define INF 2034567890
#define MAXS 200007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, k;

vi edges[MAXS];
bitset<MAXS> vis;
const ll MOD = (ll)1e9 + 7;

ll mul(ll a, ll b){
  return ((a % MOD) * (b%MOD))%MOD;
}
ll ad(ll a, ll b){
  return ((a%MOD) + (b%MOD))%MOD;
}
ll sub(ll a, ll b){
  return ( (((a%MOD) - (b%MOD))%MOD) + MOD )%MOD;
}

ll fastexp(ll a, ll b){
  if(b == 0) return 1;
  if(b % 2 == 0){
    ll x = fastexp(a, b/2);
    return mul(x, x);
  }
  return mul(fastexp(a, b-1), a);
}


ll bfs(int a){
  vis[a] = 1;
  stack <int> pilha;
  pilha.push(a);
  ll ans = 0;
  while(!pilha.empty()){
    int x = pilha.top();
    pilha.pop();
    ++ans;
    for(auto it : edges[x]){
      if(!vis[it]){
        pilha.push(it);
        vis[it] = 1;
      }
    }
  }
  return ans;
}

int main(){
  cin >> n >> k;
  int a, b, c;
  for(int i = 0; i < n-1; ++i){
    cin >> a >> b >> c;
    if(c == 0) {
      edges[a].pb(b);
      edges[b].pb(a);
    }
  }
  ll ans = 0;
  for(int i = 1; i <= n; ++i){
    if(!vis[i]){
      ll t = bfs(i);
      ans = ad(ans, fastexp(t, k));
    }
  }
  cout << sub(fastexp(n, k), ans) << endl;
}