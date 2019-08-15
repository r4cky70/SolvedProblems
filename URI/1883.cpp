#include <bits/stdc++.h>
#define MAXS 1007
#define mp(a, b) make_pair(a,b)
#define debug(a) cout << a << '\n'

#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

int n, m;
char mx[MAXS][MAXS];
int vis[MAXS][MAXS];
int dist[MAXS][MAXS];
queue <vector<pii>> fila;


int d1[4] = {1, 0, 0, -1}, d2[4] = {0, 1, -1, 0};

int bfs(int x1, int y1, int x2, int y2){
  
}




int main(){
  ios::sync_with_stdio(false);

  int t; cin >> t;
  while(t--){
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        cin >> mx[i][j];
      }
    }
  }

}