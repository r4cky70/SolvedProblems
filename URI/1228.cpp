#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 25

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int lista[MAXS], lista2[MAXS];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  while(cin >> n){
    for(int i = 0; i < n; ++i){
      cin >> lista[i];
    }
    for(int i = 0; i < n; ++i){
      cin >> lista2[i];
    }
    
    int cont = 0;
    for(int i = 0; i < n; i++){
      int j = i;
      for(j; j < n; ++j){
        if(lista2[i] == lista[j]){
          for(int k = j; k > i; --k){
            swap(lista[k], lista[k -1]);
            cont++;
          }
        }
      }
    }
    cout << cont << endl;
  }
}