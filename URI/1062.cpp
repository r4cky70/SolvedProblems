#include <bits/stdc++.h>
#define MAXS 1007

typedef long long ll;
using namespace std;

stack <int> pilha;
int main(){
    int n, j, lista[MAXS];
    while(scanf("%d", &n), n != 0){
        while(scanf("%d", &lista[0]), lista[0] != 0){
            for(int i = 1; i < n; i++){
                scanf("%d", &lista[i]);
            }
            j = 1;
            for(int i = 0; i < n; i++){
                if(pilha.empty() && j <= n){
                    pilha.push(j); j++;
                }
                if(!pilha.empty()){
                    while(lista[i] != pilha.top() && j <= n){
                        pilha.push(j); j++;
                    }
                    if(pilha.top() == lista[i]){
                        pilha.pop();
                    }else if(pilha.top() != lista[i] && j > n){
                        break;
                    }
                }
            }
            if(pilha.empty()){
                printf("Yes\n");
            }else{
                printf("No\n");
                while(!pilha.empty()) pilha.pop();
            }
        }
        printf("\n");
    }
}