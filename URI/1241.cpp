#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;string x, y, so;
    scanf("%d", &n);
    for(int i=0; i < n; i++){
        cin >> x >> y;so = ""; if(x.size() < y.size()) printf("nao encaixa\n");
        else{
            if(x.compare(x.size() - y.size(), x.size(), y) == 0) printf("encaixa\n");
            else printf("nao encaixa\n");
        }
    }
}