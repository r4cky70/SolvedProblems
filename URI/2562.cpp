#include <bits/stdc++.h>
using namespace std;

vector <int> lista[1001];
bool vis[1001];

int dfs(int no){
    vis[no] = true;
    int cont = 1;
    for(int i=0; i < lista[no].size(); i++){
        if(vis[lista[no][i]] == false) cont += dfs(lista[no][i]);
    }
    return cont;
}


int main(){
    int n, t, x, y, w, cont;
    while(scanf("%d %d", &n, &t) != EOF){
        memset(vis, 0, sizeof vis);
        for(int i=0; i < t; i++){
            scanf("%d %d", &x, &y);
            lista[x].push_back(y);
            //lista[y].push_back(x);
        }
        scanf("%d", &w);
        printf("%d\n", dfs(w));
        for(int i=1; i <= n; i++) lista[i].clear();
    }
}