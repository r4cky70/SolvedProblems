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
  vi d(n);
  vi ans(n);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  for(int i = 0; i < n; ++i){
    cin >> d[i];
  }
  for(int i = 0; i < n; ++i){
    if(i==0) ans[i] = d[i]-arr[i];
    else{
      if(d[i-1] > arr[i]) ans[i] = d[i] - d[i-1];
      else ans[i] = d[i] - arr[i];
    }
    cout << ans[i] << " ";
  }
  cout << endl;
    
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
