#include <bits/stdc++.h>
#define MAXS 107

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> ii;

int field[MAXS][MAXS];
bool vis[MAXS][MAXS];
queue <pair <ii, int>> fila;
int n, m;
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1}, dy[8] = {1, 1, 1, 0, 0, -1, -1, -1};

bool inside(int x, int y){
   if(x <= n && x > 0 && y <= m && y > 0 && vis[x][y] == false && field[x][y] == 1) return true;
  return false;
}

int bfs(int x, int y){
  int dist = 0;
  vis[x][y] = true;
  fila.push(make_pair(make_pair(x, y), dist));
  while(!fila.empty()){
    x = fila.front().first.first; y = fila.front().first.second; dist = fila.front().second;
    for(int i = 0; i < 8; i++){
      if(inside(x + dx[i], y + dy[i])){
        fila.push(make_pair(make_pair(x + dx[i], y + dy[i]), dist + 1));
        vis[x + dx[i]][y + dy[i]] = true;
      }
    }
    fila.pop();
  }
  return dist;
}

int main(){
  int t, x, y;
  scanf("%d", &t);
  for(int k = 0; k < t; k++){
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){



        
        scanf("%d", &field[i][j]);
      }
    }
    scanf("%d %d", &x, &y);
    printf("%d\n", bfs(x, y));
    memset(vis, 0, sizeof vis);
    fila = {};
  }
}