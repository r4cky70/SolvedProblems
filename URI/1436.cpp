#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, res, cont = 0;
    scanf("%d", &n);
    for(int i=0; i < n; i++){
        scanf("%d", &x);int fon[8];cont += 1;
        for(int j=0; j < x; j++){
            scanf("%d", &fon[j]);
        }
        if(x % 2 == 0)res = (fon[x / 2] + fon[(x/2) - 1]) / 2;
        else res = fon[x/2];
        printf("Case %d: %d\n", cont, res);
    }
}