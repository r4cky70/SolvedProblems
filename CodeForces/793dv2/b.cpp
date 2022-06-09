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
  vector<int> arr(n);
  bitset<32> ans((int)__builtin_inf());
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
    if(arr[i] != i){
      // debug(arr[i]);
      bitset<32> temp(arr[i]);
      for(int ii = 0; ii < 32; ++ii){
        ans[ii] = ans[ii]&temp[ii];
      }
    }
  }
  cout << ans.to_ulong() << endl;
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
