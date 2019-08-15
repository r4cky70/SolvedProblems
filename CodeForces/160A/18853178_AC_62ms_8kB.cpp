#include <bits/stdc++.h>
#define MAXS 107
#define mp(a, b) make_pair(a, b)

using namespace std;

typedef long long ll;
typedef vector <int, int> vi;
typedef pair <int, int> ii;

int lista[MAXS];


int main(){
  int n, tot = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &lista[i]);
    tot += lista[i];
  }
  tot /= 2;
  sort(lista, lista + n);
  int cont = 0, numb = 0;;
  for(int i = n - 1; i > -1; i--){
    cont += lista[i]; numb++;
    if(cont > tot){
      printf("%d\n", numb);
      return 0;
    }
  }
}