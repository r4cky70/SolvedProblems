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
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  vi mai(n), men(n);
  for(int i = 0; i < n; ++i){
    for(int j = i+1; j < n; ++j){
      if(arr[j] > arr[i]) mai[i]++;
      else men[i]++;
    }
  }
  for(auto i : mai) cout << i << " ";
  cout << endl;
  for(auto i : men) cout << i << " ";
  cout << endl;
  // int ans = 0;
  // for(int i = 0; i < n-1; ++i){
  //   int x = arr[i], y = arr[i+1];
  //   if(x > y){
  //     ans += mai[i]*men[i+1];
  //   }else{
  //     int men6 = 0;
  //     for(int j = i+2; j < n; ++j){
  //       if(arr[j] < arr[i+1]) men6++;
  //       if(arr[i] < arr[j]){
  //         // debug(n-(j+mai[j]+1));
  //         ans += men[i+1]-men6;
  //         // ans += n-(j+mai[j]+1);
  //       }
  //     }
  //   }
  //   debug(ans);
  // }
  // cout << ans << endl;
    
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
