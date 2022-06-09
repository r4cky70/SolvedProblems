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

  string s;
  cin >> s;
  int n = s.size();
  int p1 = -2, p2 = n+1;
  for(int i= 0; i < n; ++i){
    if(s[i] == '1') p1 = i;
    else if (s[i] == '0'&& p2 == n+1) p2 = i;
  }
  if(n == 1) cout << 1 << endl;
  else if(p2 == n+1 && p1 == -2) cout << n << endl;
  else if(p2 == n+1){
    cout << n-p1 << endl;
    // debug(p1);
  }else if(p1 == -2){
    cout << 1+p2 << endl;
  }
  else if(p2-p1 == 1) cout << 2 << endl;
  else cout << p2-p1+1 << endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  cin >> TT;  
  while(TT--) solvetask();
}
