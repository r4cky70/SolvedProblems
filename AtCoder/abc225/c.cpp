#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) cerr <<"[ ";for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<"]\n";

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MN = 10007;

ll mx[MN][9];

void solvetask(){

  ll n, m;
  cin >> n >> m;
  ll ans = true;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> mx[i][j];
      if(i==0 && j < m-1 && mx[i][j]%7 == 0) ans = false;
      if(i == 0 && j > 0){
        if(mx[i][j] - mx[i][j-1] != 1) ans = false;
      }
      else if(i > 0){
        if(mx[i][j] -mx[i-1][j] != 7) ans = false;
      }
    }
  }
  cout << (ans? "Yes\n" : "No\n");
  
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  // cin >> TT;
  while(TT--) solvetask();
}
