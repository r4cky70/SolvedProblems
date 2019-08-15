#include <bits/stdc++.h>
#define MAXS 100000

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair <int, int> ii;

int main(){
  int n;
  string nome, str;
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    cin >> nome;
    int cont = 0;
    for(int j = 0; j < nome.size(); j++){
      if(nome[j] < 58 && nome[j] > 47){
        int ponti = j, pontf = 1;
        j++;
        while(true){
          if(nome[j] < 58 && nome[j] > 47 && j < nome.size()) pontf++;
          else{
            cont += stoi(str.assign(nome, ponti, pontf));
          }
          j++;
        }
      }
    }
    printf("%d\n", cont);
  }
}