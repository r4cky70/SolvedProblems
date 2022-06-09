#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) cerr <<"[ ";for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<"]\n";

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MN = 100007;

void func(vector<int> &arr){
  for(auto i : arr) cout << i << endl;
}


void solvetask(){

  int n, m;
  cin >> n >> m;
  int q, x, y;
  vector<array<int,2>> arr(n);
  for(auto& i : arr) fill(all(i), -1);
  for(int i = 0; i < m; ++i){
    cin >> q;
    if(q == 3){
      cin >> x; x--;
      // debug(arr[x][0]);debug(arr[x][1]);
      find(x, arr);
    }
    else if(q == 2){
      cin >> x >> y;
      x--;y--;
      arr[x][1] = -1;
      arr[y][0] = -1;
    }
    else{
      cin >> x >> y;
      x--;y--;
      arr[x][1] = y;
      arr[y][0] = x;
    }
  }
  
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
