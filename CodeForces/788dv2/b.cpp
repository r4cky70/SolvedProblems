#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;

bool in(vector<char>& arr, int t){
  return (find(all(arr), t) != arr.end());
}

void solvetask(){

  int n, k;
  string s;
  cin >> n; cin >> s;
  cin >> k;
  vector<char> arr(k);
  for(int i = 0; i < k; ++i){
    cin >> arr[i];
  }
  int ans = 0, acu = 0;
  bool flag = false;
  // debug(s);
  // debug(arr[0]);
  // debug(in(arr, 's'));
  // debug(in(arr, 'a'));
  for(int i = n-2; i >= 0; --i){
    if(in(arr, s[i+1])){
      acu = 1;
      flag = true;
    }
    else if(!in(arr, s[i+1]) && flag){
      acu++;
    }
    ans = max(acu, ans);
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
