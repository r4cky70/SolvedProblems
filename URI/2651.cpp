#include <bits/stdc++.h>
#define MAXS 100000

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair <int, int> ii;

int main(){
  int cont = 0;
  string nome;
  string zelda = "zelda";
  cin >> nome;
  if (nome.size() < 5) {
    printf("Link Tranquilo\n"); return 0;
  }
  bool flag = true;
  for(int i = 0; i < nome.size(); i++){
    if(nome[i] < 97 && nome[i] < 123) nome[i] += 32;
    if(nome[i] == zelda[cont]) {
      cont++;
      if(cont == 5) {flag = false; break;}
    }
    else cont = 0;
  }
  if(!flag) printf("Link Bolado\n");
  else printf("Link Tranquilo\n");
}