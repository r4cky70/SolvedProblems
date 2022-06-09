#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) cerr <<"[ ";for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<"]\n";

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MN = 100007;

void solvetask(){

  int n;
  cin >> n;
  string s;
  for(int i = 0; i < n; ++i){
    cin >> s;
    int a = 0, b = 0;
    bool ans = true;
    for(int i = 0; i < s.size(); ++i){
      if(s[i] == 'a'){
        if(b>0){
          if(b==1) ans = false;
          b = 0;
        }
        ++a;
      }
      else{
        if(a>0){
          if(a==1) ans = false;
          a = 0;
        }
        ++b;
      }
    }
    if(a == 1 || b == 1) ans = false;
    cout << (ans? "YES":"NO") << endl;
  }
  
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  // cin >> TT;
  while(TT--) solvetask();
}
