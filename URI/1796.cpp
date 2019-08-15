#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, cont = 0;
    scanf("%d", &n);
    for(int i=0; i < n; i++){
        scanf("%d", &x);
        if(x == 0) cont += 1;
    }if(cont > n / 2) printf("Y\n");
    else printf("N\n");
}