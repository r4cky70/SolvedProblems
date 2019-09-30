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

ll modinv(ll a, ll m) {
	assert(m > 0);
	if (m == 1) return 0;
	a %= m;
	if (a < 0) a += m;
	assert(a != 0);
	if (a == 1) return 1;
	return m - modinv(m, a) * m / a;
}

template <int MOD> class modnum{
public:
  ll v;
  modnum(){v = 0;}
  modnum(ll p){v = p%MOD;}
  bool operator == (modnum& o) {return this.v == o.v;}
  bool operator != (modnum& o) {return this.v != o.v;}
  friend ostream& operator << (ostream& os, const modnum& mn) {
    os << mn.v;
    return os;
  }
  friend istream& operator >> (istream& is, modnum& mn) {
    is >> mn.v;
    return is;
  }
  modnum operator ~ () {return modnum(modinv(v, MOD));}
  modnum operator + (ll o) {return (v+o)%MOD;}
  modnum operator - (ll o) {return ((v-o)%MOD+MOD)%MOD;}
  modnum operator * (ll o) {return (v*o)%MOD;}
  modnum operator / (ll o) {return (v * modinv(o, MOD));}

  modnum operator + (modnum& o) {return (v+o.v)%MOD;}
  modnum operator - (modnum& o) {return ((v-o.v)%MOD+MOD)%MOD;}
  modnum operator * (modnum& o) {return (v*o.v)%MOD;}
  modnum operator / (modnum& o) {return (v * ~o)%MOD;}

  modnum& operator += (modnum& o) {return *this = *this + o;}
  modnum& operator -= (modnum& o) {return *this = *this - o;}
  modnum& operator *= (modnum& o) {return *this = *this * o;}
  modnum& operator /= (modnum& o) {return *this = *this / o;}

  modnum& operator ++ (int) {v+=1;return *this;}
  modnum& operator -- (int) {v-=1;return *this;}
};
using num=modnum<31>;

void solve(){
  num n, m;
  cin >> n >> m;
  cout << n << " " << m << endl;
  cout << n + m << endl;
  cout << n - m << endl;
  n += m;
  cout << n << endl;
  cout << n++ << endl;
  cout << n-- << endl;
  cout << "step\n";
  // num x = (~m);
  // cout << n*x << endl;
  cout << n * ~(m) << endl;
  
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
