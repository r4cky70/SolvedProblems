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

void solvetask(){

  int n;
  cin >> n;
  int a , b;
  vector<vector<int>> edges(n);
  for(int i = 0; i < n-1; ++i){
    cin >> a >> b;
    a--;b--;
    edges[a].push_back(b);
    edges[b].push_back(a);
  }
  bool ans = false;
  for(auto i : edges){
    if(i.size() == n-1) ans = true;
  }
  cout << (ans? "Yes\n" : "No\n");
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
