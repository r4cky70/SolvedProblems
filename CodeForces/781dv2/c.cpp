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

array<int, MAXS> arr;

void qg(){
  arr[0] = 0;
  for(int i = 1; i < 1000; ++i){
    arr[i] = arr[0] + i;
  }
}


void solve(){

  int n;
  cin >> n;
  vector<vector<int>> edges(n+1);
  int x;
  for(int i = 0; i < n-1; ++i){
    cin >> x;
    edges[x].pb(i+2);
  }
  int comp = 1; int maior = 0;
  for(int i = 1; i <= n; ++i){
    if(edges[i].size() > 0){
      comp++;
      maior = max((int)edges[i].size(), maior);

    } 
  }
  int nmaior = 0;
  for(auto& i : edges){
    if((int)i.size() == maior) nmaior++;
  }
  debug(comp);debug(maior);
  int ans = 0;
  if(comp >= maior) ans = comp;
  else{
    // ans = comp + (maior - comp + 1)/2;
    ans = comp + ((maior - comp) * nmaior + arr[nmaior-1] + nmaior)/(nmaior+1);
  }
  cout << ans << endl;
}
 
int main(){
  cout.precision(12);
  cout << fixed;
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  fill(all(arr), -1);
  qg();
  solve();
  cerr << "Time: " << 1.0*clock()/CLOCKS_PER_SEC << " s.\n";
#else
  // freopen("input.txt", "r", stdin);
  ios::sync_with_stdio(false);cin.tie(0);
  int t; cin >> t;
  while(t--){
  fill(all(arr), -1);
  qg();
  solve();

  }
#endif
}
