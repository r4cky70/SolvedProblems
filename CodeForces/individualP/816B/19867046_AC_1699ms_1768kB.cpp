#include <bits/stdc++.h>
#define MAXS 200007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, k, q, a, b;
int temp[MAXS]; bool lista[MAXS];
int acu[MAXS];

int main(){
  cin >> n >> k >> q;
  for(int i = 0; i < n; ++i){
    cin >> a >> b;
    temp[a]++; temp[b+1]--;
  }
  int aux = 0;
  for(int i = 0 ; i < MAXS; ++i){
    aux += temp[i];
    if(aux >= k) lista[i] = 1;
  }
  acu[0] = lista[0];
  for(int i = 1; i < MAXS; ++i){
    acu[i] = acu[i-1] + lista[i];
  }
  for(int i = 0; i < q; ++i){
    cin >> a >> b;
    cout << acu[b] - acu[a-1] << "\n";
  }

}