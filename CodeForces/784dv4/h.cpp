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

  int n, k;
  cin >> n >> k;
  vi arr(32, 0);
  for(int i = 0; i < n; ++i){
    int x;cin >> x;
    bitset<32>temp(x);
    for(int i = 0; i < 32; ++i){
      arr[i]+=temp[i];
    }
  }
  debug(k);
  debugarr(arr, 32);
  int ans = 0;
  for(int i = 30; i >= 0; --i){
    if(n-arr[i]<=k){
      k-=(n-arr[i]);
      // debug(i);
      // debug((1<<(i-1)));
      ans += (1<<i);
    }
  }
  cout << ans << endl;
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
