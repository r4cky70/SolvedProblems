#include <bits/stdc++.h>
using namespace std;

int josephus(int x, int y){
    if(x == 1) return 1;
    return ((josephus(x - 1, y) + (y - 1)) % x)+ 1;
}



int main(){
    int n, x, y, cont = 0;
    scanf("%d", &n);
    for(int i=0; i < n; i++){
        cont += 1;
        scanf("%d %d", &x, &y);
        printf("Case %d: %d\n", cont, josephus(x, y));
    }
}