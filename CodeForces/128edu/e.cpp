#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;

void solvetask(){

  int n;
  cin >> n;
  string arr[2];
  cin >> arr[0] >> arr[1];
  int l = 0, r = 0;
  vector<pii> points;
  for(int i = 0; i < n; ++i){
    if(arr[0][i] == '*'){
      if(i < n/2) l += abs(i-n/2);
      else r += abs(i-n/2);
      points.push_back({0, i});
    }
    if(arr[1][i] == '*'){
      if(i < n/2) l += abs(i-n/2);
      else r += abs(i-n/2);
      points.push_back({1, i});
    }
  }
  
  int m = n*(l*1.0/(l+r));
  m = max(m, 0);
  int x = sqrt(n);
  // debug(x);
  // debug(m);
  for(auto i : points){
    cout << i.first << " " << i.second << endl;
  }
  ll ans = (ll)__builtin_inf();
  for(int i = m-x; i <= m+x; ++i){
    // debug(m-x/2);
    if(i >= 0 && i < n){
      ll d1 = 0, d2 = 0;
      // debug(i);

      for(auto k : points){
        d1 += abs(0 - k.first);
        d1 += abs(i - k.second);
        d2 += abs(1 - k.first);
        d2 += abs(i - k.second);
      }
      ans = min(d1, ans);
      ans = min(d2, ans);

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
