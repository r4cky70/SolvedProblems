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
  vi arr(n);
  map<int, int> dic;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
    dic[arr[i]]++;
  }
  sort(all(arr));
  reverse(all(arr));
  int l1 = 1, l2 = 1;
  for(int i = 0;i < n; ++i){
    if(i == 0 || arr[i] == arr[0]) continue;
    if(arr[i] != arr[i-1]){
      if(dic[arr[i]] == 1){
        if(l2 < l1) ++l2;
        else l1++;
      }else{
        ++l1;++l2;
      }
    }
  }
  reverse(all(arr));
  int r1 = 1, r2 = 1;
  for(int i = 0;i < n; ++i){
    if(i == 0 || arr[i] == arr[0]) continue;
    if(arr[i] != arr[i-1]){
      if(dic[arr[i]] == 1){
        if(r2 < r1) ++r2;
        else r1++;
      }else{
        ++r1;++r2;
      }
    }
  }
  cout << max(min(l1, l2), min(r1, r2)) << endl;
  // cout << min(l1, l2) << endl;
    
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
