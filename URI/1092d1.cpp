#include <bits/stdc++.h>
#define MAXS 200007

using namespace std;
typedef long long ll;

int lista[MAXS], maximo;
bool vis[MAXS];
vector <int> sill;

void walls(int n){
  for(int i = 0; i < n-1; i++){
    if(lista[i] == lista[i + 1]){
      int p1 = i; int p2 = i + 1;
      vis[p1] = true; vis[p2] = true;
      int lol = lista[p1];
      while(p1-- >= 0 && p2++ < n){ 
        if(lista[p1] != lista[p2]) break;
        else{
          if(lista[p1] >= lol){
            if(vis[p1] == false && vis[p2] == false){
              vis[p1] = true; vis[p2] = true;
            }
            else break;
          }
          else break;
        }
        lol = lista[p1];
      }
      i = p2 - 1;
    }
  }
}


int main(){
  int n;
  scanf("%d", &n); maximo = 0;
  for(int i = 0; i < n; i++){
    scanf("%d", &lista[i]);
    if(lista[i] > maximo) maximo = lista[i];
  }
  for(int i = 0 ; i < n; i++) if(lista[i] == maximo) vis[i] = true;
  int p1 = 0, p2 = 0;
  walls(n);
  for(int i = 0; i < n; i++){
    if(vis[i] == false) {
      printf("NO\n"); return 0;
    }
  }
  printf("YES\n");
}