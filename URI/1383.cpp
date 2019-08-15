#include <bits/stdc++.h>
#define INF 1234567890
#define MAXS 1007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n;
int mx[9][9];
int v1[9] = {0, 0, 0, 3, 3, 3, 6, 6, 6}, v2[9]={0, 3, 6, 0, 3, 6, 0, 3, 6};

bool validador(){
  int sum, sum2;
  for(int i = 0; i < 9; ++i){
    int sum = 0;
    for(int j = 0; j < 3; ++j){
      for(int k = 0; k < 3; ++k){
        sum += mx[v1[i] + j][v2[i] + k];
      }
    }
    if(sum != 45) return false;
  }
  for(int i=0; i<9; ++i){
    sum = 0;
    sum2 = 0;
    for(int j = 0; j < 9; ++j){
      sum += mx[i][j];
      sum2 += mx[j][i];
    }
    if(sum != 45 || sum2 != 45) return false;
  }
  
}


int main(){
  INP; OUT;
  cin >> n;
  int cont = 0;
  for(int i =0; i<n; ++i){
    for(int j = 0; j < 9; ++j){
      for(int k = 0; k  < 9; ++k){
        cin >> mx[j][k];
      }
    }
    cout << "Instancia " << ++cont << "\n";
    cout << (validador() ? "SIM\n" : "NAO\n");
    cout << "\n";
  }
}