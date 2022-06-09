
#include <bits/stdc++.h>

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
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
const int MAXS = 100007;

void solvetask(){

  int r, x, y, a, b;
  cin >> r >> x >> y >> a >> b;
  double ans = 0;
  r*=2;
  if(x == a || y == b) ans = ceil((abs(a-x)+abs(b-y))/(double)r);
  else{
    int base = abs(y-b);
    int altura = abs(x-a);
    ans = ceil(sqrt(base*base+altura*altura)/(double)r);
  }
  int iu = static_cast<int>(ans);
  cout << iu << endl;
  
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
