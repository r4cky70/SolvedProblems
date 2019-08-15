#include <bits/stdc++.h>
#define MAXS 10007

using namespace std;
typedef long long ll;

int main(){
  int lista[16], oit[8], qua[4], sem[2];

  for(int i = 0; i < 16; i++){
    scanf("%d", &lista[i]);
  }int j = 0;
  for(int i = 0; i < 16; i+=2){
    if((lista[i] == 1 && lista[i + 1] == 9) || (lista[i] == 9 && lista[i + 1] == 1)){
      printf("oitavas\n"); return 0;
    }
    if(lista[i] == 1 || lista[i + 1] == 1) oit[j] = 1;
    else if(lista[i] == 9 || lista[i + 1] == 9) oit[j] = 9;
    else oit[j] = lista[i];
    j++;
  }j = 0;
  for(int i = 0; i < 8; i+= 2){
    if((oit[i] == 1 && oit[i + 1] == 9) || (oit[i] == 9 && oit[i + 1] == 1)){
      printf("quartas\n"); return 0;
    }
    if(oit[i] == 1 || oit[i + 1] == 1) qua[j] = 1;
    else if(oit[i] == 9 || oit[i + 1] == 9) qua[j] = 9;
    else qua[j] = oit[i];
    j++;
  }j = 0;
  for(int i = 0; i < 4; i+=2){
    if((qua[i] == 1 && qua[i + 1] == 9) || (qua[i] == 9 && qua[i + 1] == 1)){
      printf("semifinal\n"); return 0;
    }
    if(qua[i] == 1 || qua[i + 1] == 1) sem[j] = 1;
    else if(qua[i] == 9 || qua[i + 1] == 9) sem[j] = 9;
    else qua[j] = sem[i];
    j++;
  }
  printf("final\n");
}