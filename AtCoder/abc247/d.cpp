#include <bits/stdc++.h>

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define endl "\n"
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

void solvetask(){

  int n;
  ll q, x, c;
  cin >> n;
  vector<pair<ll,ll>> arr;
  vll querie;
  for(int i = 0; i < n; ++i){
    cin >> q;
    if(q == 1){
      cin >> x;
      cin >> c;
      arr.push_back({c, x});
    }
    else{
      cin >> c;
      querie.pb(c);
    }
  }
  reverse(all(arr));
  for(auto& i : querie){
    ll ans = 0;
    ll x = i;
    while(x > 0){
      if(x >= arr.back().first){
        ans += arr.back().first*arr.back().second;
        x -= arr.back().first;
        arr.pop_back();
      }else{
        ans += arr.back().second*x;
        arr.back().first -= x;
        x = 0;
        // debug(arr.back().first);
      }
    // for(auto it : arr){
    //   debug(it.first);
    //   debug(it.second);
    // }
    }
    cout << ans << endl;
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
  solvetask();
#endif
}
