#include <bits/stdc++.h>
#define MAXS 200

using namespace std;
typedef long long ll;

string cpf, x;


int main(){
  int soma, d1, d2;
  while(cin >> cpf){
    x = "";
    for(int i = 0; i < cpf.size(); i++){
      if(!(cpf[i] == '.' || cpf[i] == '-')){
        x += cpf[i];
      }
    }
    soma = 0; d1 = 0; d2 = 0;
    for(int i = 0; i < x.size(); i++){
      soma += x[i] - '0';
      if(i < 9){
        d1 += (x[i] - '0') * (i + 1);
        d2 += (x[i] - '0') * (9 - i);
      }
    } bool flag = true;
    if(soma % 11 != 0) flag = false;
    int lol;
    lol = d1 % 11; if(lol == 10) lol = 0;
    if(lol != x[9] - '0') flag = false;
    lol = d2 % 11; if(lol == 10) lol = 0;
    if(lol != x[10] - '0') flag = false;
    if(flag) printf("CPF valido\n");
    else printf("CPF invalido\n");
  }
}
