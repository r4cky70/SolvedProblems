#include <bits/stdc++.h>
using namespace std;

#define mp(a, b) make_pair(a, b)
#define debug(a) cout << a << '\n'
#define MAXS 200007

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n;
int lista[MAXS];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> lista[i];
    while(lista[i] % 2 == 0){
      lista[i] /= 2;
    }
    while(lista[i] % 3 == 0){
      lista[i] /= 3;
    }
  }
  bool flag = true;
  for(int i = 0; i < n - 1; i++){
    if(lista[i] != lista[i + 1]){
      flag = false; break;
    }
  }
  cout << (flag ? "YES\n" : "NO\n");

  
}