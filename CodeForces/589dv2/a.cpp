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

void solve(){
  string s1; int s2;
  cin >> s1;
  cin >> s2;
  
  int vis[10];
  bool ans = false;
  while(true){
    memset(vis, 0, sizeof vis);
    bool flag = true;
    for(int i = 0; i < s1.size(); ++i){
      if(vis[s1[i]-'0'] == true){
        flag = false;
        break;
      } 
      vis[s1[i]-'0'] = true;
    }
    if(flag){
      cout << s1 << endl;
      break;
    }
    int t = stoi(s1)+1;
    if(t > s2) break;
    s1 = to_string(t); 
  }
  cout << "-1" << endl;
  
  

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
