#include <bits/stdc++.h>

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<endl

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector < int > vi;
typedef vector < ll > vll;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MAXS = 1007;

int h, w;

int r[MAXS], c[MAXS];

int mx[MAXS][MAXS];
const int MOD = 1000000007;

void solve(){
  cin >> h >> w;
  bool flag = true;
  for(int i = 0; i < h; ++i){
    cin >> r[i];
    for(int j = 0; j < r[i]; ++j){
      if(mx[i][j] == 2) flag = false;
      mx[i][j] = 1;
    }
    if(w > r[i]){
      if(mx[i][r[i]] == 1) flag = false;
      mx[i][r[i]] = 2;
    } 
  }for(int i = 0; i < w; ++i){
    cin >> c[i];
    for(int j = 0; j < c[i]; ++j){
      if(mx[j][i] == 2) flag = false;
      mx[j][i] = 1;
    }
    if(h > c[i]){
      if(mx[c[i]][i] == 1) flag = false;
      mx[c[i]][i] = 2;

    } 
  }
  ll ans = 1;
  for(int i = 0; i < h; ++i){
    for(int j = 0; j < w; ++j){
      if(mx[i][j] == 0) ans = ans*2 %MOD;
    }   
  }
  cout << (!flag ? 0 : ans) << endl;

}

int main(){
  cout.precision(12);
  cout << fixed;
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  solve();
  cerr << "Time: " << 1.0*clock()/CLOCKS_PER_SEC << " s.\n";
#else
  ios::sync_with_stdio(false);cin.tie(0);
  solve();
#endif
}
