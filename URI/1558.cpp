#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 10007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

ll lista[MAXS];
ll squa[MAXS];
bool vis[MAXS];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  // OUT;
  iota(lista, lista + 10001, 0);
  for(int i = 0; i < 10001; ++i){
    squa[i] = lista[i] * lista[i];
  }
  for(int i = 0; i < 10001; ++i){
    for(int j = 0; j < 10001; ++j){
      ll x = squa[i] + squa[j];
      if(x > 10000) break;
      vis[x] = true;
    }
  }
  int n;
  while(cin >> n){
    cout << (vis[n] ? "YES\n" : "NO\n");
  }


}