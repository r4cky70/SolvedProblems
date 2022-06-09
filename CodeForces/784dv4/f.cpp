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
  vi arr(n);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  int p1 = -1, p2 = n;
  int ans = 0;
  int tot1 = 0, tot2 = 0;
  while(p1 < p2 && p2-p1 > 1){
    if(tot1 <= tot2){
      p1++;
      tot1+=arr[p1];
    }else{
      p2--;
      tot2+=arr[p2];
    }
    if(tot1 == tot2){
      ans = p1+1+(n-p2);
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
