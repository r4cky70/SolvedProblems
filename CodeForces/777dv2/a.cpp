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

  int n;
  int t;
  cin >> t;
  while(t--){
    cin >> n;
    string s;
    int flag = true;
    if(n == 1)cout << 1;
    else if(n==2) cout << 2;
    else{
      int x = n;
      while(x > 0){
        if(flag == true && x == 1){
          flag = false;
          s = "";
          x = n;
          continue;
        }
        if(flag){
          x -=2;
          s+="2";
          flag = !flag;
        }
        else{
          x -=1;
          s+="1";
          flag = !flag;
        }
      }

    }
    cout << s;
    cout << endl;

  }
  
}

int main(){
  cout.precision(12);
  cout << fixed;
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  solvetask();
  cerr << "Time: " << 1.0*clock()/CLOCKS_PER_SEC << " s.\n";
#else
  ios::sync_with_stdio(false);cin.tie(0);
  solvetask();
#endif
}
