#include <bits/stdc++.h>
#define MAXS 300007
#define INF 2147483647

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int bch = no*2, mid = (l+r)/2
#define all(a) a.begin(), a.end()

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;
#define FASTIO ios::sync_with_stdio(false); cin.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int main(){
  int a, b , c, n;
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> a >> b >> c;
    if(c == 0) cout << (a > b ? "1" : "0") << endl;
    else {
      if(a > b){
        cout << min(c+1, max((a+c-b+1)/2, 0)) << endl;
      }else{
        cout << min(c, max((a+c-b+1)/2, 0)) << endl;
      }
    }
  }
}