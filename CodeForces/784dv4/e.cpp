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
  vector<string> arr(n);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  sort(all(arr));
  ll ans = 0;
  for(int i = 0; i < n; ++i){
    for(int j = i+1; j < n; ++j){
      
      int x = (arr[i][0] == arr[j][0]) +  (arr[i][1] == arr[j][1]);
      // if((arr[i][0] == arr[j][0])) x++;
      // if((arr[i][1] == arr[j][1])) x++;
      if(x == 1) ans++;
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