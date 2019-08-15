#include <bits/stdc++.h>
#define MAXS 200007

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

int lista[MAXS];


int main(){
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%d", &lista[i]);
  }
  int max = 0;
  sort(lista, lista + n);
  
  
  int p1 = 0, p2 = 1;
  while(p2 < n){
    if(lista[p2] - lista[p1] <= 5) {
      if(p2 - p1 > max) max = p2 - p1;
      p2++;
    }
    else p1++;
    
  }
  printf("%d\n", max + 1);

}