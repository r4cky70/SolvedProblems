#include <bits/stdc++.h>
#define MAXS 10007

using namespace std;
typedef long long ll;

int main(){
  int n, at, ad, bt, bd, vida, temp1, temp2;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d %d %d %d", &ad, &at, &bd, &bt);
    scanf("%d", &vida);
    temp1 = 0; temp2 = 0;
    while(true){
      temp1++; temp2++;
      if(temp1 % at == 0){
        vida -= ad;
        temp1 = 0;
        if(vida <= 0){
          printf("Andre\n"); break;
        }
      }
      if(temp2 % bt == 0){
        vida -= bd;
        temp2 = 0;
        if(vida <= 0){
          printf("Beto\n"); break;
        }
      }
    }
  }
}
