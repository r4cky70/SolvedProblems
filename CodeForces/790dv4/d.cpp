#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 207;

void solvetask(){

  int n, m;
  cin >> n >> m;
  int mx[MN][MN];
  int mx1[MN+MN];
  int mx2[MN+MN];
  memset(mx1, 0, sizeof(mx1));
  memset(mx2, 0, sizeof(mx2));

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> mx[i][j];
      mx1[i+j+MN] += mx[i][j];
      mx2[i-j+MN] += mx[i][j];
    }
  }
  int ans = 0;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      ans = max(mx1[i+j+MN]+mx2[i-j+MN]-mx[i][j], ans);
    }
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
