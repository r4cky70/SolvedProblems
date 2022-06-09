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

  ll n, m;cin >> n >> m;
  if(n == 1 && m == 1) cout << 0 << endl;
  else if((n == 1 && m == 2) || (n==2 && m==1)) cout << 1 << endl;
  else if(m == 1 || n == 1) cout << -1 << endl;
  else{
    if(m> n) swap(n,m);
    ll ans = 0;
    ll x = n-m;
    ans = (m - 1)*2;
    ans += (x % 2 ? (x-1)*2+1 : x*2);
    cout << ans << endl;
  }
  
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
