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

  int n, k;
  cin >> n >> k;
  string s; cin >> s;
  int p1 = 0, nw = 0, ans = 9999999;
  for(int i = 0; i < n; ++i){
    if(s[i] == 'W') ++nw;
    if(i - p1 > k-1){
      nw -= s[p1] == 'W';
      p1++;
    }
    if(i-p1 == k-1){
      ans = min(ans, nw);
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
