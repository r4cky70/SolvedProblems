#include <bits/stdc++.h>

#define MAXS 1007

typedef long long ll;

using namespace std;

int main(){
  int n, t, men = 1000000007, lista[MAXS];
  ll tot = 0;


  scanf("%d %d", &n, &t);
  for(int i = 0; i < n; i++){
    scanf("%d", &lista[i]); tot += lista[i];
    if(lista[i] > men) men = lista[i];
  }
  if((float)tot - t < 0) printf("-1\n");
  else{
    printf("%d\n", (int)((tot - t) / n));
  }
}