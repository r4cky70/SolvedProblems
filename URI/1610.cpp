#include <bits/stdc++.h>
#define MAXS 10007

typedef long long ll;
using namespace std;

vector <int> lista[MAXS];
bool vis[MAXS];

bool in(vector <int> lista, int x){
    for(int i = 0; i < lista.size(); i++){
        if(lista[i] == x){
            return true;
        }
    }
    return false;
}


bool dfs(int x){
    if(vis[x] == true) return true;
    vis[x] = true;
    for(int i = 0; i < lista[x].size(); i++){
        if(dfs(lista[x][i]) == true) return true;
    }
    return false;
}

int main(){
    int n, a, b, x, y;bool flag;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        for(int j = 0; j < b; j++){
            scanf("%d %d", &x, &y);
            if(!in(lista[x], y)){
                lista[x].push_back(y);
            }
        }
        flag = false;
        for(int j = 1; j <= a; j++){
            memset(vis, 0, sizeof vis);
            if(dfs(j) == true) {
                flag = true; break;
            }
        }
        if(flag == true){
            printf("SIM\n");
        }else printf("NAO\n");
    }
}