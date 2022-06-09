#include <bits/stdc++.h>

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) cerr <<"[ ";for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<"]\n";

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector < int > vi;
typedef vector < ll > vll;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MAXS = 107;

int mx[MAXS][MAXS];
int mxn[MAXS][MAXS];

void solvetask(){

  int t;
  int n, m;
  cin >> t;
  while(t--){
    cin >> n >> m;
    string s;
    for(int i = 0; i < n; ++i){
      cin >> s;
      for(int j = 0; j < m; ++j){
        mx[i][j] = s[j]-48;
      }
    }
    vector<array<int, 4>>ans;
    if(mx[0][0] == 1){
      cout << -1 << endl;
    }
    else{
      for(int i = n-1; i >= 0; i--){
        for(int j = m-1; j >= 0; --j){
          if(j == 0 && i == 0) break;
          if(j == 0&&mx[i][j] == 1){
            ans.push_back({i-1+1, j+1, i+1, j+1});
            mxn[i-1][j] = 0;
            mxn[i][j] = 1;
          }
          else if(mx[i][j] == 1){
            ans.push_back({i+1, j-1+1, i+1, j+1});
            mxn[i][j] = 1;
            mxn[i][j-1] = 0;
          }
        }
        
      }
      for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
          if(mx[i][j] == 0 && mxn[i][j] != mx[i][j]){
            ans.push_back({i+1, j+1, i+1, j+1});
            mxn[i][j] = 0;
          }
        }
      }
      cout << ans.size() << endl;
      for(auto& i : ans){
        for(auto &j : i) cout << j << " ";
        cout << endl;
      }
    }
    
    // for(int i = 0; i < n; ++i){
    //   for(int j = 0; j < m; ++j){
    //     cout << mxn[i][j];
    //   }
    //   cout << endl;
    // }
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m; ++j){
        mx[i][j] = 0;
        mxn[i][j] = 0;
      }
    }
    ans.clear();
  }
  
}

int main(){
  cout.precision(12);
  cout << fixed;
  int t = 1;
  // cin >> t;
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  while(t--) solvetask();
  cerr << "Time: " << 1.0*clock()/CLOCKS_PER_SEC << " s.\n";
#else
  ios::sync_with_stdio(false);cin.tie(0);
  while(t--) solvetask();
#endif
}
