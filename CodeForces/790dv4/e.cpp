#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;

// ll solve(ll x, vi& arr, ll i, ll cont){
//   if(i >= arr.size()) return (ll)__builtin_inf();
//   // if(x-arr[i] < 0) return (ll)__builtin_inf();
//   if(x-arr[i] == 0) return cont+1;
//   return min(solve(x-arr[i], arr, i+1, cont+1), solve(x, arr, i+1, cont));
// }
// ll nvd;
// ll solve(ll x, vector<ll>& arr){
//   if(x >= nvd) return -1;
//   ll tot = 0;
//   for(int i = 0; i < arr.size(); ++i){
//     tot+= arr[i];
//     if(tot >= x) return i+1;
//   }
//   nvd = x;
//   return -1;
// }


void solvetask(){

  ll n, q, x;
  cin >> n >> q;
  vector<ll> arr(n);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  vector<ll> d(n);
  sort(all(arr));
  reverse(all(arr));
  for(int i = 0; i < n; ++i){
    if(i == 0) d[i] = arr[i];
    else d[i] = arr[i] + d[i-1];
  }
  

  for(int i = 0; i < q; ++i){
    cin >> x;
    auto ans = lower_bound(all(d), x);
    if(ans == d.end()) cout << -1 << endl;
    else cout << ans+1 - d.begin() << endl;
    // ll ans = solve(x, arr, 0, 0); 
    // cout << (ans == 9223372036854775807 ? -1 : ans) << endl;
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
