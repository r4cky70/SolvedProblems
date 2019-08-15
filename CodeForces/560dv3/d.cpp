#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 3007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int q, n;
ll lista[MAXS];

bool checa(ll wtf){
  vi casa;
  for(int i = 2; i <= sqrt(wtf); ++i){
    if(wtf % i == 0){
      casa.pb(i);
    }
  }
  return casa.size() == n;
}

int main(){
  INP; OUT;
  cin >> q;
  for(int i = 0; i < q; ++i){
    cin >> n;
    for(int i = 0; i < n; ++i){
      cin >> lista[i];
    }
    sort(lista, lista + n);
    bool flag = true; 
    ll x;
    if(n % 2 == 0){
      x = lista[0] * lista[n - 1];
      for(int i = 1; i < n / 2 - 1; ++i){
        if(lista[i] * lista[n - i - 1] != x){
          flag = false;
          break;
        }
      }
    }else{
      x = lista[n/2] * lista[n/2];
      // cout << "casa " << x << endl;
      for(int i = 0; i < n/2; ++i){
        if(lista[i] * lista[n - i -1] != x){
          flag = false;
          break;
        }
      }
    }
    if(!checa(x)) flag = false;
    if(flag) cout << x << endl;
    else cout << -1 << endl;
  }
}