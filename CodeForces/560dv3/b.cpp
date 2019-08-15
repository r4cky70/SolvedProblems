#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 200007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n;
int lista[MAXS];

int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> lista[i];
  }
  sort(lista, lista +n);
  int cont = 0;
  for(int i = 0; i < n; ++i){
    if(cont < lista[i]){
      cont++;
    }
  }
  cout << cont;
}