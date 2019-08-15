#include <bits/stdc++.h>
#define MAXS 200007
#define make_pair(a, b) mp(a,b)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

string field[101];
int n, m, cont = 1;


bool inside(int x, int y){
  return x >= 0 && x < n && y >= 0 && y < m;
}


int main(){
  while(scanf("%d %d", &n, &m), n != 0 && m != 0){
    if(cont > 1) printf("\n");
    for(int i  = 0; i < n; i++){
      cin >> field[i];
    }
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(field[i][j] == '*'){
          for(int k = -1;k < 2; k++){
            for(int l = -1; l < 2; l++){
              if(inside(i + k, j + l) && field[i + k][j + l] != '*') field[i + k][j+l]++;
            }
          }
        }
      }
    }
    printf("Field #%d:\n", cont++);
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(field[i][j] >= '.') printf("%d", field[i][j] - '.');
        else printf("%c", field[i][j]);
      }
      printf("\n");
    }
  }
}