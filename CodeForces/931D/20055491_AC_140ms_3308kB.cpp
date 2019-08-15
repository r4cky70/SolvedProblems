#include <bits/stdc++.h>
#define MAXS 100007
#define INF 2147483647

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, a;
int idk[MAXS];
vi edges[MAXS];
bitset<MAXS> vis;

int bfs(){
  vis[1] = true;
  queue<pii> fila;
  fila.push(mp(1, 1));
  while(!fila.empty()){
    pii temp = fila.front();
    fila.pop();
    for(int i = 0; i < edges[temp.first].size(); ++i){
      if(!vis[edges[temp.first][i]]){
        fila.push(mp(edges[temp.first][i], temp.second+1));
        idk[temp.second] += 1;
        vis[edges[temp.first][i]] = true;
      }
    }
  }
}




int main(){
  cin >> n;
  for(int  i =1 ;i < n; ++i){
    cin >> a;
    edges[a].pb(i+1);
  }
  bfs();
  int ans = 0;
  for(int  i =0; i < n; ++i){
    ans += idk[i] % 2;
  }
  cout << ans+1;
}