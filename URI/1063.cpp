#include <bits/stdc++.h>

#define MAXS 26

using namespace std;

char lista[MAXS], saida[MAXS];
stack <char> pilha;

int main() {
  int n, j; char c;
  while(scanf("%d", &n), n != 0){
    for(int i = 0; i < n; i++) {
      scanf("%c", &lista[i]);
    }
    for(int i = 0; i < n; i++) {
      scanf(" %c", &saida[i]);
    }
    for(int i = 0; i < n; i++) {
      while((pilha.empty() && j < n) || (pilha.top() != lista[i] && j < n)){
        pilha.push(lista[j]);
        j++; printf("I");
      }
      if(!pilha.empty() && saida[i] == pilha.top()){
        pilha.pop(); printf("R");
      }else if(!pilha.empty() && saida[i] != pilha.top() && j == n){
        printf("Impossible"); break;
      }
    }
    printf("\n");
  }
}
