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
const int MAXS = 1000007;

int arr[MAXS];

void solve(){
  int n;
  cin >> n;
  int cont = n;
  int x = 1;
  if(n == 3) {
    cout << "1 1 3";
    return;
  }
  while(x <= n){
    int y = x;
    x*=2;
    for(int i = y; i <= n; i+=x){
      arr[i] = true;
      cout << y << " ";
      cont--;
    }
    if(cont <= 3) break;
  }
  vector<int> ans;
  for(int i = 1; i <= n; ++i){
    if(arr[i] == 0){
      ans.pb(i);
    }
  }
  if(ans.size() >= 1){
    for(int i = 0; i < ans.size() -1; ++i)cout << ans[0] << " ";
    cout << ans[ans.size()-1];
  }
  

  // if(n == 6) {
  //   cout << "1 1 1 2 2 6\n";
  //   return;
  // }
  // while(x*2 < MAXS){
  //   x*=2;
  //   arr[x] = 3;
  // }
  // for(int i = 1; i <= n; i+=2){
  //   arr[i] = 1;
  //   cout << "1 ";
  // }
  // for(int i = 1; i <= n; ++i){
  //   if(arr[i] == 0) cout << "2 "; 
  // }
  // for(int i = 1; i <= n; ++i){
  //   if(arr[i] == 3) cout << i << ' ';
  // }
  // cout << endl;

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
