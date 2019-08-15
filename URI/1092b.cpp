#include <bits/stdc++.h>
#define MAXS 103

using namespace std;
typedef long long ll;

int main(){
  int n, lista[MAXS];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &lista[i]);
  }sort(lista, lista + n);
  int cont = 0;
  for(int i = 0; i < n; i+=2){
    cont += abs(lista[i] - lista[i + 1]);
  }
  printf("%d\n", cont);
}