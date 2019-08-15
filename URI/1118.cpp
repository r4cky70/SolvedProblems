#include <bits/stdc++.h>
#define MAXS 2

typedef long long ll;
using namespace std;

int main(){
  int n, lista[MAXS], tot;
  while(true){
    tot = 0;
    for(int i = 0; i < 2; i++){
      scanf("%d", &lista[i]);
      if(n > 10 || n < 0){
        i--; printf("nota invalida\n");
      }
      else{
        tot += lista[i];
      }
    }
    while(scanf("%d", &n)){
      if(n == 2) break
    }
  }
}