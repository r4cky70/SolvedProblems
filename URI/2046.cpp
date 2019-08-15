#include <bits/stdc++.h>
using namespace std;

vector <pair <int, int>> lista[10000];
set <pair <int, int>> fon;
int n, m;

void bfs(int x, int y){
    int cont = 0, sum = x + y;
    while(fon.empty()){
        if(sum - cont > 1){
            if(lista[sum - cont].size() > 0){
                for(int i=0; i < lista[sum - cont].size();i++) fon.insert(lista[sum - cont][i]);
            }
        }if(sum + cont <= n + m){
            if(lista[sum + cont].size() > 0){
                for(int i=0; i < lista[sum + cont].size();i++) fon.insert(lista[sum + cont][i]);
            }
        }cont++;
    }
}


int main(){
    int k, l, x, y, cont = 1;
    while(scanf("%d %d", &n, &m), n != 0 && m != 0){
        scanf("%d", &k);printf("Instancia %d\n", cont++);
        for(int i=0; i < k; i++){
            scanf("%d %d", &x, &y);
            lista[x + y].push_back(make_pair(x, y));
        }scanf("%d", &l);
        for(int i=0; i < l; i++){
            scanf("%d %d", &x, &y);
            bfs(x, y);
            printf("%d %d\n", (*fon.begin()).first, (*fon.begin()).second);
            fon.clear();
        }for(int i=2; i < n + m; i++) lista[i].clear(); printf("\n");
    }
}