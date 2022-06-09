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
  vector<ll> arr(n);
  for(int i = 0; i< n; ++i){
    cin >> arr[i];
  }
  ll ans = (ll)__builtin_inf();
  for(int i = 0; i < n; ++i){
    ll max = 0;
    vector<ll> temp(n,0);
    for(int j = i+1; j < n; ++j){
      ll x = temp[j-1]/arr[j]+1;
      max += x;
      temp[j] = arr[j]*x;
    }
    for(int j = i-1; j >= 0; --j){
      ll x = temp[j+1]/arr[j]+1;
      max += x;
      temp[j] = arr[j]*x;
    }
    // debug(max);
    ans = min(ans,max);
  }
  cout << ans << endl;
  
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
