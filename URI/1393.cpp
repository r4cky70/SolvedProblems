#include <bits/stdc++.h>
using namespace std;

int cont;

int bfs(int x, int y){
    if(x < y){
        return cont += bfs(x + 1, y);
        // if(x + 2 <= y) cont += bfs(x + 2, y);
    }else return 1;
}


int main(){
    int x;
    while(scanf("%d", &x)){
        cont = 0;
        printf("%d\n", bfs(0, x));
    }
}