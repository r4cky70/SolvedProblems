#include <bits/stdc++.h>
#define MAXS 507

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

int main(){
  int lista[12] = {10000, 5000, 2000 ,1000 ,500 , 200, 100, 50, 25, 10, 5, 1};
  double x;
  scanf("%lf", &x);
  x *= 100;
  int d = x;

  printf("NOTAS:\n");
  for (int i = 0; i < 12; i++){
    if(i == 6) printf("MOEDAS:\n");
    if(i >= 6) {
      printf("%d moeda(s) de R$ %.2lf\n", d / lista[i], lista[i] / 100.0);
    }
    else {
      printf("%d nota(s) de R$ %.2lf\n", d / lista[i], lista[i] / 100.0);
    }
    d %= lista[i];
  }
}