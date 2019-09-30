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
const int MAXS = 100007;

int arr[MAXS];
int cost[MAXS];
int n, t;



void solve(){
  cin >> t;
  while(t--){
    cin >> n;
    for(int i = 0; i < n; ++i){
      cin >> arr[i] >> cost[i];
    }
    int ans = 0;
    for(int i = 1; i < n; ++i){
      if(arr[i] == arr[i-1]){
        if(cost[i] > cost[i-1]){
          arr[i-1]++;
        }
      }
    }

  }
  

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
