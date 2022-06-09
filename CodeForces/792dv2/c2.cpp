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

  int n, m;
  cin >> n >> m;
  vi arr(n);
  vi arrs(n);
  vi mai, men;
  bool ans = true;
  int i1d = -1, i2d = -1;
  for(int i = 0; i< n; ++i){
    // int i1d = -1, i2d = -1;
    for(int j = 0; j < m; ++j){
      cin >> arr[j];
      arrs[j] = arr[j];
    }
    sort(all(arrs));
    int dif = 0;
    int i1 = -1, i2 = -1;
    for(int j = 0; j < m; ++j){
      if(arr[j] != arrs[j]) {
        dif++;
        if(i1 == -1)i1 = j;
        else i2 = j;
      }
    }
    // cout << i1 << " " << i2 << endl;
    if(dif > 2) ans = false;
    if(i1d != -1 && i2d != -1){
      if(i1 == -1 && i2 == -1) continue;
      if(i1 != i1d || i2 != i2d) ans = false;
    }
    if(dif > 0){
      i1d = i1; i2d = i2;
    }
    // cout << "i1d" << " " <<i1d << " " << i2d << endl;
    
  }
  if(i1d == -1 && i2d == -1){
    i1d = 0; i2d = 0;
  }
  if(ans){
    i1d++;i2d++;
    cout << i1d << " " << i2d << endl;
  }else{
    cout << -1 << endl;
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
