#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 3007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n;
ll lista[MAXS], lista2[MAXS];

ll mod(ll a, ll b){
  return (a % 998244353 + b % 998244353) % 998244353;
}

bool func(ll a, ll b){
  return a < b;
}

int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> lista[i];
  }
  for(int i = 0; i < n; ++i){
    cin >> lista2[i];
  }
  sort(lista, lista + n);
  sort(lista2, lista2 + n, func);
  for(int i = 0 ; i < n; ++i){
    cout << lista[i] << ' ';
  }cout << endl;
  for(int i = 0 ; i < n; ++i){
    cout << lista2[i] << ' ';
  }cout << endl;
  ll ans = 0;
  for(int i = 0 ; i < n; ++i){
    ans += mod(lista[i], lista2[i]);
  }
  cout << ans * n << endl;

}