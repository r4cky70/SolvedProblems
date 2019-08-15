#include <bits/stdc++.h>
#define MAXS 5007
#define INF 1234567890

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, m;
int lista[MAXS];

int main(){
  cin >> n >> m;
  for(int i =0; i < n; ++i){
    cin >> lista[i];
  }
  sort(lista, lista+n);
  reverse(lista, lista+n);
  int cont = 0;
  int i = 0;
  while(cont < m && i < n){
    cont += lista[i];
    ++i;
  }
  cout << i;
}