#include <bits/stdc++.h>
#define MAXS 100007
#define INF 1234567890

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int lista[MAXS], cost[MAXS];
vector<pii> idle;
int n, m;
int maximo[MAXS];
int indi[MAXS];

int main(){
  cin >> n >> m;
  ll ans = 0;
  for(int i = 0; i < n; ++i){
    cin >> lista[i];
  }
  int a;
  for(int i = 0; i < n; ++i){
    cin >> a;
    if(maximo[lista[i]] < a){
      maximo[lista[i]] = a;
      indi[lista[i]] = i;
    }
    idle.push_back(mp(a, lista[i]));
  }
  for(int i = 1; i <= n; ++i){
    if(maximo[i] > 0){
      idle[indi[i]].first = INF;
      m--;
    }
    
  }
  sort(idle.begin(), idle.end());
  int i = 0;
  while(m >0){
    ans += idle[i].first;
    m--;
    i++;
  }
  cout << ans;
}