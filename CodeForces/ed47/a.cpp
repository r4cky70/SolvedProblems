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

int arr[MAXS], bil[MAXS];

void solve(){



  int n, m;
  cin >> n >> m;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  for(int i = 0; i < m; ++i){
    cin >> bil[i];
  }

  int p1 = 0, p2 = 0;
  int ans = 0;
  while(p1 < n && p2 < m){
    if(arr[p1] <= bil[p2]){
      ++ans;
      ++p1;
      ++p2;
    }else{
      p1++;
    }
  }
  cout << ans << endl;

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
