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
const int MAXS = 10007;

int n, m;

char mx[MAXS][MAXS];
char asi[MAXS][MAXS];

void solve(){
  cin >> n >> m;
  for(int i= 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> mx[i][j];
      if(mx[i][j] == '.') mx[i][j] = 0;
    }
  }
  bool flag = true;
  for(int i =1; i < n-1; ++i){
    for(int j = 1; j < m-1; ++j){
      if(mx[i-1][j-1] == '#' && mx[i-1][j] == '#' && mx[i-1][j+1] == '#' && mx[i][j-1] == '#' && mx[i][j+1] == '#' && mx[i+1][j-1] == '#' && mx[i+1][j] == '#' && mx[i+1][j+1] == '#'){
        asi[i-1][j-1] = '#';asi[i-1][j] = '#';asi[i-1][j+1] = '#';asi[i][j-1] = '#';asi[i][j+1] = '#';asi[i+1][j-1] ='#';asi[i+1][j] = '#' ;asi[i+1][j+1] = '#';
      }

    }
  }
  for(int i =0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      if(mx[i][j] != asi[i][j]) flag = false;
    }
  }
  cout << (flag ? "YES\n" : "NO\n");

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
