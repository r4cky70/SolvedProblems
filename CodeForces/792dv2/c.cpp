#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 200007;

void solvetask(){

  int n, m;

  cin >> n >> m;
  // cout << 1 << endl;
  vector<vector<int>> mx(n, vi(m));
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> mx[i][j];
    }
  }
  bool ans = true;
  vi mai, men;
  for(int i = 0; i < n; ++i){
    int ma = -1, me = -1;
    for(int j = 0; j < m-1; ++j){
      if(mx[i][j] > mx[i][j+1]){
        if(ma == -1){
          ma = mx[i][j];
        }else if(me == -1){
          me = mx[i][j+1];
        }else{
          ans = false;
        }
      }
    }
    mai.push_back(ma);men.push_back(me);
  }
  int i1d = -1, i2d = -1;
  for(int i = 0; i < mai.size(); ++i){
    if(mai[i] != -1){
      if(i1d != -1 && i1d != mai[i]) ans = false;
      else if(i2d != -1 && i2d != men[i]) ans = false;
      else{
        i1d = mai[i];
        i2d = men[i];
      }
    }
  }
  if(i1d != -1 && i2d == -1){
    i2d = m-1;
  }
  if(i1d != -1 && i2d != -1){
    for(int i = 0; i < n; ++i){
      swap(mx[i][i1d], mx[i][i2d]);
    }
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < m-1; ++j){
        if(mx[i][j] > mx[i][j+1]) ans = false;
      }
    }
  }
  if(ans){
    i1d++;i2d++;
    cout << i1d << " " << i2d << endl;
  }else{
    cout << -1 << endl;
  }
}

int main(){
  // ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  cin >> TT;
  while(TT--) solvetask();
}
2 3 3
1 4 1