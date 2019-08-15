#include <bits/stdc++.h>
using namespace std;

bool myfunction(int n, int m){
    return n > m;
}

int main(){
    int n, sum , m = 1000000007, k, lista[1000000];
    while(scanf("%d %d", &n, &k) != EOF){
        sum = 0; memset(lista, 0, sizeof lista);
        for(int i=0; i< n; i++){
            scanf("%d", &lista[i]);
        }sort(lista, lista + n, myfunction);
        for(int i=0; i < k; i++){
            sum = ((sum%m)+(lista[i]%m))%m;
        }printf("%d\n", sum);
    }
}