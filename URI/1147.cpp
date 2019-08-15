#include <bits/stdc++.h>
#define MAXS 10007

using namespace std;
typedef long long ll;

bool board[9][9];

bool inside(string s){
  if(s[0] < '1' || s[0] > '8' || s[1] > 'h' || s[1] < 'a'){
    return false;
  }
  else return true;
}

int cavalo(string s){
  string temp;
  int cont = 0;
  int left[8] = {1, -1, 2, 2, 1, -1, -2, -2};
  int right[8] = {-2, -2, -1, 1, 2, 2, -1, 1};
  for(int i = 0; i < 8; i++){
    temp = s;
    temp[0] += left[i]; temp[1] += right[i];
    if(inside(temp)){
      if(board[temp[0] - '0'][temp[1] - '`'] == false) cont++;
    }
  }
  return cont;
}

void peao(string s){
  string temp = s;
  temp[0] -= 1; temp[1] -= 1;
  if(inside(temp)){
    board[temp[0] - '0'][temp[1] - '`'] = true;
  }
  temp[1] += 2;
  if(inside(temp)){
    board[temp[0] - '0'][temp[1] - '`'] = true;
  }
}

int main(){
  string s, lista[8];
  int cont = 1;
  while(cin >> s, s != "0"){
    memset(board, 0 ,sizeof board);
    for(int i = 0; i < 8; i++){
      cin >> lista[i];
      peao(lista[i]);
    }
    printf("Caso de Teste #%d: %d movimento(s).\n", cont++, cavalo(s));
  }
}