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

bool func(char a, char b){
  if(abs(a-b) <= 1) return a < b;
  else{
    return false;
  }
}

void solve(){

  string s;
  cin >> s;
  if(s.size() == 1){
    cout << s << endl;
    return;
  }
  int p1 = 0;
  bool um = false;
  bool dois = false;
  for(int i = 0; i < s.size(); ++i){
    if(s[i] == '1'){
      um = true;
    }
    else if(s[i] == '2'){
      dois = true;
    }else if(s[i] == '0' && um && dois){
      sort(s.begin()+p1, s.begin()+i);
      um = false;
      dois = false;
      p1 = i; 
    }else if(s[i] == '0' && !um && dois){
      p1 = i;
      dois = false;
    }
  }
  if(um) sort(s.begin()+p1, s.end());
  cout << s << endl;
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
