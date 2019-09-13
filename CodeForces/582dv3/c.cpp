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
const int MAXS = 150007;

ll t, n, m;
unordered_set <ll> res;
vll yo;

void solve(){
  cin >> t;
  while(t--){
    cin >> n >> m;
    ll aux = m;
    ll sum = 0;
    ll temp = aux%10;
    while(res.find(temp) == res.end()){
      res.insert(temp);
      yo.pb(temp);
      aux += m;
      sum+=temp;
      temp = aux%10;
    }
    ll t = n/m/res.size();
    ll x = n/m%res.size();
    ll ans = t*sum;
    int cont = 0;
    for(auto it : yo){
      cont++;
      if(cont > x)break;
      ans+=it;
    }
    cout << ans << "\n";
    res.clear();
    yo.clear();
  }
  

}

int main(){
  cout.precision(12);
  cout << fixed;
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  solve();
  cerr << ".\nTime: " << 1.0*clock()/CLOCKS_PER_SEC << " s.\n";
#else
  ios::sync_with_stdio(false);cin.tie(0);
  solve();
#endif
}
