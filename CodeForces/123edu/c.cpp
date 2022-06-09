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

int check(vi &acu, int x){
  int ans = -(int)__builtin_inf();
  int sum = 0;
  int l, r;
  for(int i = 0; i < acu.size(); ++i){
    sum=acu[i];
    if(i >= x){
      sum-=acu[i-x];
    }

    ans = max(sum, ans);
  }
  return ans;
}




void solvetask(){

  int n, k;
  cin >> n >> k;
  vi arr(n);
  vi acu(n);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
    if(i>0) acu[i] = acu[i-1]+arr[i];
    else acu[i] = arr[i];
  }
  cout << check(acu, 3) << endl;
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
