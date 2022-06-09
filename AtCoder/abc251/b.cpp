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

  int n, w;
  cin >> n >> w;
  vi arr(n);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  vi check(w+1);
  for(int i = 0;i < n; ++i){
    if(arr[i] <= w) check[arr[i]]++;
    for(int j = 0; j < n; ++j){
      if(j!= i){
        if(arr[i]+arr[j] <= w) check[arr[i]+arr[j]]++;
      }
      for(int k = 0; k < n; ++k){
        if(j!=i && j!= k && i!=k){
          int temp = arr[i]+arr[j]+arr[k];
          if(temp <= w) check[temp]++;
        }
      }
    }
  }
  int ans = 0;
  for(auto i : check) if(i)++ans;
  cout << ans << endl;

    
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  // cin >> TT;
  while(TT--) solvetask();
}
