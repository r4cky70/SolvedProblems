#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, cont1, cont2;
    while(scanf("%d", &n), n != 0){
        cont1 = 0; cont2 = 0;
        for(int i=0; i < n; i++){
            scanf("%d %d", &x, &y);
            if(x > y) cont1 ++;
            else if(x < y) cont2++;
        }printf("%d %d\n", cont1, cont2);
    }
}