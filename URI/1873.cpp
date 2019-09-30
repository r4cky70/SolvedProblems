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

map<string, vector<string>> dic;


void solve(){
  int t;
  dic["lagarto"].pb("spock");
  dic["lagarto"].pb("papel");
  dic["spock"].pb("tesoura");
  dic["spock"].pb("pedra");
  dic["pedra"].pb("lagarto");
  dic["pedra"].pb("tesoura");
  dic["papel"].pb("pedra");
  dic["papel"].pb("spock");
  dic["tesoura"].pb("papel");
  dic["tesoura"].pb("lagarto");
  

  cin >> t;
  string s1, s2;
  while(t--){
    cin >> s1 >> s2;
    if(s1 == s2) cout << "empate\n";
    else if(dic[s1][0] == s2 || dic[s1][1] == s2) cout << "rajesh\n";
    else cout << "sheldon\n";
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
