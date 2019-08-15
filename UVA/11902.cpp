#include <bits/stdc++.h>
#define MAXS 107

using namespace std;
typedef long long ll;
typedef pair <int, int> ii;
typedef vector <int> vi;

int n;
int adj[MAXS][MAXS];
bool dep[MAXS][MAXS];
int vis[MAXS];

void dfs(int x){
  dep[0][x] = true;
  dep[x][x] = true;
  vis[x] = true;
  for(int i = 0; i < n; i++){
    if(adj[x][i] == 1 && !vis[i]){
      dfs(i);
    }
  }
}

vector <int> dom;

void idk(){
  
  for(int i = n - 1; i > -1; i--){
    int cont = 0;
    for(int j = 0; j < n; j++){
      if(adj[j][i] == 1) cont++, dom.push_back(j);
    }
    if(cont == 1){
      dep[dom[0]][i] = true;
    }dom.clear();
  }
}

int main(){
  int t, cont = 1;;
  scanf("%d", &t);
  for(int k = 0; k < t; k++){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        scanf("%d", & adj[i][j]);
      }
    }
    dfs(0);
    idk();
    printf("Case %d:\n", cont++);
    for(int i = 0; i < n; i++){
      printf("+"); printf("%s", string(((n -1) * 2 + 1), '-').c_str()); printf("+\n");
      for(int j = 0; j < n; j++){
        
        if(dep[i][j] == true) printf("|Y");
        else printf("|N");
      }
      printf("|\n");
    }
    printf("+"); printf("%s", string(((n -1) * 2 + 1), '-').c_str()); printf("+\n");
    memset(vis, 0, sizeof vis); memset(dep, 0, sizeof dep);
  }
}