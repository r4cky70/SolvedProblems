#include <bits/stdc++.h>
#define MAXS 200007
#define make_pair(a, b) mp(a,b)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

string chess;

char board[8][8];

bool inside(int x, int y){
  return x < 8 && x > -1 && y < 8 && y > -1 ? true : false;
}

void dk(int x, int y){
  int pos[3] = {-1, 0, 1};
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(inside(x + i, y + j) && board[x + i][y + j] == 0) board[i][j] = '*';
    }
  }
}

void dr(int x, int y){
  for(int i = x; i < 8; i++){
    if(inside(i, y)){
      if(board[i][y] != '*' && board[i][y] != 0) break;
      board[i][y] = '*';
    }
  }
  for(int i = x; i > -1; i--){
    if(inside(i, y)){
      if(board[i][y] != '*' && board[i][y] != 0) break;
      board[i][y] = '*';
    }
  }
  for(int i = y; i < 8; i++){
    if(inside(x, i)){
    if(board[x][i] != '*' && board[x][i] != 0) break;
    board[x][i] = '*';
    }
  }
  for(int i = y; i > -1; i--){
    if(inside(x, i)){
    if(board[x][i] != '*' && board[x][i] != 0) break;
    board[x][i] = '*';
    }
  }
}

void dc(int x, int y){
  int a1[8] = {-2, -1, 1, 2, 2, 1, -1, -2}, a2[8] = {1, 2, 2, 1, -1, -2, -2, -1};
  for(int i = 0; i < 8; i++){
    if(inside(x + a1[i], y + a2[i]) && board[x + a1[i]][y + a2[i]] == 0) board[x + a1[i]][y + a2[i]] = '*';
  }
}

void db(int x, int y){
  int w = max(x, y);
  for(int i = 0; i < 8; i++){
    if(inside(x + i, y + i)){
      if(board[x + i][y + i] != '*' && board[x + i][y - i] != 0) break;
      else board[x + i][y + i] = '*';
    } else break;
  }
  for(int i = 0; i < 8; i++){
    if(inside(x + i, y - i)){
      if(board[x + i][y - i] != '*' && board[x + i][y - i] != 0) break;
      else board[x + i][y - i] = '*';
    } else break;
  }
  for(int i = 0; i < 8; i++){
    if(inside(x - i, y - i)){
      if(board[x - i][y - i] != '*' && board[x - i][y - i] != 0) break;
      else board[x - i][y - i] = '*';
    } else break;
  }
  for(int i = 0; i < 8; i++){
    if(inside(x - i, y + i)){
      if(board[x - i][y + i] != '*' && board[x - i][y + i] != 0) break;
      else board[x - i][y + i] = '*';
    } else break;
  }
}
void dp(int x, int y, char c){
  int a1[2] = {-1, 1}, aw[2] = {-1, -1}, ab[2] = {1, 1};
  if(c == 'b') swap(aw, ab);
  for(int i = 0; i < 2; i++){
    if(inside(x + a1[i], y + aw[i])){
      board[x + a1[i]][y + aw[i]] = '*';
    }
  }
}



// 5k1r/2q3p1/p3p2p/1B3p1Q/n4P2/6P1/bbP2N1P/1K1RR3

int main(){
  while(cin >> chess){
    int cont = 0, contl = 0;
    for(int i = 0; i < chess.size(); i++){
      if(chess[i] == '/') {
        cont++; contl = 0;
      }
      else if(chess[i] > 48 && chess[i] < 58){
        contl += chess[i] - 48;
        
      }
      else{
        board[cont][contl] = chess[i];
        contl++;
      }
    }
    for(int i = 0; i < 8; i++){
      for(int j = 0; j < 8; j++){
        switch (board[i][j])
        {
          case 'k': dk(i, j);
          case 'K': dk(i, j);
          case 'r': dr(i, j);
          case 'R': dr(i, j);
          case 'q': {db(i, j); dr(i, j);}
          case 'Q': {db(i, j); dr(i, j);}
          case 'p': dp(i, j, 'b');
          case 'P': dp(i, j, 'w');
          case 'n': dc(i, j);
          case 'N': dc(i, j);
          case 'b': db(i, j);
          case 'B': db(i, j);
        }
      }
    }
    int cache = 0;
    for(int i = 0; i < 8; i++){
      for(int j = 0;j < 8; j++){
        if(board[i][j] == 0) cache++;
      }
    }
    printf("%d\n", cache);
    
    for(int i = 0; i < 8; i++){
      memset(board[i], 0 ,sizeof board[i]);
    }
  }

}