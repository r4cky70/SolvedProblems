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
const int MN = 200007;

ll n, a, b;
ll arr[MN];
ll mq[MN];
ll cf[MN];


void solvetask(){

  cin >> n >> a >> b;
  for(int i = 1; i <= n; ++i){
    cin >> arr[i];
  }
  cf[n] = 0;
  for(int i = n; i > 0; --i){
    cf[i] = (n+1-i)*b*abs(arr[i-1]-arr[i])+cf[i+1];
  }
  for(int i = 1; i < n; ++i){
    mq[i] = a*abs(arr[i]-arr[i-1]) + b*abs(arr[i]-arr[i-1]) + mq[i-1];
  }
  ll ans = (ll)__builtin_inf();
  for(int i = 1; i <= n; ++i){
    ans = min(mq[i-1]+cf[i], ans);
  }
  cout << ans << endl;
  fill(arr, arr+n+1, 0);
  fill(mq, mq+n+1, 0);
  fill(cf, cf+n+1, 0);
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
