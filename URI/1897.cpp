#include <bits/stdc++.h>
#define MAXS 10007

using namespace std;
typedef long long ll;
typedef pair <int, int> ii;
typedef vector <int> vi;


queue <ii> fila;
bool vis[MAXS];



int bfs(int n, int m){
  fila.push(make_pair(n, 0));
  int res, dis;
  while(true){
    n = fila.front().first; dis = fila.front().second;
    if(n == m) return dis;
    res = n * 2;
    if(!vis[res] && res >= 0 && res <= 10002) {fila.push(make_pair(res, dis + 1));vis[res] = true;}
    res = n * 3;
    if(!vis[res] && res >= 0 && res <= 10002) {fila.push(make_pair(res, dis + 1));vis[res] = true;}
    res = n / 2;
    if(!vis[res] && res >= 0 && res <= 10002) {fila.push(make_pair(res, dis + 1));vis[res] = true;}
    res = n / 3;
    if(!vis[res] && res >= 0 && res <= 10002) {fila.push(make_pair(res, dis + 1));vis[res] = true;}
    res = n + 7;
    if(!vis[res] && res >= 0 && res <= 10002) {fila.push(make_pair(res, dis + 1));vis[res] = true;}
    res = n - 7;
    if(!vis[res] && res >= 0 && res <= 10002) {fila.push(make_pair(res, dis + 1));vis[res] = true;}
    fila.pop();
  }
}

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  printf("%d\n", bfs(n, m));
}