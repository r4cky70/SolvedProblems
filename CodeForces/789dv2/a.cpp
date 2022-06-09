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
  int zero = 0;
  int other = 0;

  for(int i = 0; i < n; ++i){
    cin >> arr[i];
    if(arr[i] == 0) zero++;
    else other++;
  }
  sort(all(arr));
  bool flag = false;
  for(int i = 1; i < n; ++i){
    if(arr[i] == arr[i-1]) flag = true;
  }
  if(zero> 0) cout << other << endl;
  else{
    cout << (flag? n : n+1) << endl;
  }
    
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
