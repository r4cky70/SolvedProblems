#include <bits/stdc++.h>
#define MAXS 507
#define INF 1234567890

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
  for(int i = 0 ; i< n ;++i){
    cin >> lista[i];
  }
  bool flag = false;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      for(int k =0; k < n; ++k){
        int t[3] = {lista[i], lista[j], lista[k]};
        sort(t, t+3);
        if(lista[i] != lista[j] && lista[j] != lista[k] && lista[i] != lista[k]){
          // cout << t[0] - t[2] << endl;
          if(t[2] - t[0] <= 2) flag = true;
        }
      }
    }
  }
  cout << (flag ? "YES" : "NO");
}