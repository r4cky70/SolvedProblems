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

int n, m,t, c;
vi lista[MAXS];
int ca[MAXS];
bitset<MAXS> vis;

int main(){
  cin >> n >> m;
  for(int i= 0 ; i < m; ++i){
     cin >> t;
     for(int j = 0; j < t; ++j){
       cin >> c;
       lista[i].pb(c);
     }
  }
  for(int i = 0; i < m; ++i){
    cin >> ca[i];
  }
  for(int k = 0; k < n;++k){
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
        if(i == j) continue;
        if(i != j) vis[j] = 1;

      }
    }

  }
}