#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;

ll cost(string a, string b){
  ll ans = 0;
  for(int i = 0; i < a.size(); ++i){
    ll x = a[i]-'a', y = b[i] - 'a';
    // ans+=min(abs(x - y), abs(x + 26 - y));
    ans+=abs(x - y);
  }
  return ans;
}


void solvetask(){

  int n, m;
  cin >> n >> m;
  vector<string> arr(n);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  ll ans = (ll)__builtin_inf();
  for(int i = 0; i < n; ++i){
    for(int j = i+1; j < n; ++j){
      // ans += cost(arr[i], arr[j]);
      ans = min(cost(arr[i], arr[j]), ans);
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
