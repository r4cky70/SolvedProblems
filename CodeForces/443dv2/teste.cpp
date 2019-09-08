#include <bits/stdc++.h>
#define MAXS 100007
#define INF 2147483647

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int branch = no*2, mid = (l+r)/2
#define all(a) a.begin(), a.end()

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int n;
int d[MAXS], t[MAXS];


int main(){
  cin >> n;
  int a, b;
  for(int i = 0 ; i < n; ++i){
    cin >> a >> b;
    d[i] = a; t[i] = b;
  }
  int ans = 0;
  for(int i = 0; i < n; ++i){
    while(ans<d[i]){
      if(ans < d[i]) ++ans;
      else d[i]+=t[i];
    }
  }
  cout << ans << endl;
}