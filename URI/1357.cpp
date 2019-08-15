#include <bits/stdc++.h>
#define MAXS

typedef long long ll;
using namespace std;

char braile[3][200], solve[3][200];
char lista[100];

map <char [3][2]> dic = {};



int main(){
  int n; char c;
  while(scanf("%d", &n), n != 0){
    scanf("%c", &c);
    if(c == 'S'){
      scanf("%s", &lista);

    }
    else{
      for(int j = 0; j < 3; j++){
        for(int i = 0; i < n; i++){
          scanf("%s", &braile[i + 1])
        }
      }
    }
  }
}