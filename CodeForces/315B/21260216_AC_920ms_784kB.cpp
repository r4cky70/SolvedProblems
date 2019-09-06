#include <bits/stdc++.h>
#define MAXS 200007
#define INF 1234567890

#define make_pair(a, b) mp(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

int main(){
  int n, m, lista[MAXS], x, y, z;

  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++){
    scanf("%d", &lista[i]);
  }
  int acumul = 0;

  for(int i = 0; i < m; i++){
    scanf("%d %d", &x, &y);
    if(x == 1){
      scanf("%d", &z);
      if(acumul != 0){
        for(int j = 0; j < n; j++){
          lista[j] += acumul;
        }
        acumul = 0;
      }
      lista[y - 1] = z;
    }
    else if (x == 2){
      acumul += y;  
    }else{
      if(acumul != 0){
        for(int j = 0; j < n; j++){
          lista[j] += acumul;
        }
        acumul = 0;
      }
      printf("%d\n", lista[y - 1]);
    }
  }

}