#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cont; string s;
    while(scanf("%d", &n), n != 0){
        cin >> s;
        cont = 0;
        for(int i=0; i < n; i++){
            if(s[i] == 'D') cont += 1;
            else cont -= 1;
        }
        if(abs(cont % 4) == 0) printf("N\n");
        else if(abs(cont % 4) == 1) printf("L\n");
        else if(abs(cont % 4) == 2) printf("S\n");
        else printf("O\n");
    }
}