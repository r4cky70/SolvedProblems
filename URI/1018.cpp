#include <bits/stdc++.h>
#define MAXS 200

using namespace std;
typedef long long ll;

int main(){
  int n, lista[7] = {100, 50, 20, 10, 5, 2, 1};
  scanf("%d", &n);
  printf("%d\n", n);
  for(int i = 0 ; i < 7; i++){
    printf("%d nota(s) de R$ %d,00\n", n/lista[i], lista[i]);
    n %= lista[i];
  }
}