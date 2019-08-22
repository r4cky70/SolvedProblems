#include <bits/stdc++.h>
#define MAXS 100007
#define INF 2147483647

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int bch = no*2, mid = (l+r)/2
#define ALL(a) a.begin(), a.end()

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int n;
int arr[MAXS];

int spt[MAXS][25];

void build(){
  for(int i = 0; i < n; ++i){
    spt[i][0] = arr[i];
  }
  for(int i = 1; i <= 25; ++i){
    for(int j = 0; j + (1<<i-1)<=n; ++j){
      spt[j][i] = min(spt[j][i-1], spt[j+(1<<(i-1))][i-1]);
    }
  }
}
int query(int L, int R){
  if(L > R) swap(L, R);
  int lg = __builtin_clz(1) - __builtin_clz(R-L+1);
  return min(spt[L][lg], spt[R-(1<<lg)+1][lg]);
}

int q;

int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  cin >> q;
  int a, b;
  build();
  for(int i = 0; i < q; ++i){
    cin >> a >> b;
    cout << query(a, b) << "\n";
  }
}