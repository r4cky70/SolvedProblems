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
  vi arr1(n), arr2(n);
  for(int i = 0; i < n; ++i) cin >> arr1[i];
  for(int i = 0; i < n; ++i) cin >> arr2[i];
  vi c1 = arr1, c2 = arr2;
  sort(all(c1));sort(all(c2));
  vector<pii> ans;
  bool flag = true;
  for(int k = 0; k < n; ++k){
    for(int i = k+1; i < n; ++i){
      if(arr1[i] == c1[k] && arr2[i] == c2[k]){
        ans.push_back({k, i});
        swap(arr1[i], arr1[k]);
        swap(arr2[i], arr2[k]);
      }
    }
  }
  for(int i = 1; i < n; ++i){
    if(arr1[i] < arr1[i-1] || arr2[i] < arr2[i-1]) flag = false;
  }
  if(flag){
    cout << ans.size() << endl;
    for(auto i : ans) cout << ++i.first << " " << ++i.second << endl;
  }else cout << -1 << endl;
    
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
