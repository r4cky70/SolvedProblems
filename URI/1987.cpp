#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cont; string s;
    while(scanf("%d", &n) != EOF){
        cin >> s; cont = 0;
        for(int i=0; i<s.size(); i++){
            cont += s[i] - '0';
        }
        printf("%d ", cont);
        if(cont % 3 == 0) (printf("sim\n"));
        else printf("nao\n");
    }
}