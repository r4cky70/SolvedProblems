#include <bits/stdc++.h>
#define MAXS 200007
#define INF 1234567890

#define make_pair(a, b) mp(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

int n, m;
int l1[MAXS], l2[MAXS];

int main(){
  cin >> n >> m;
  for(int i = 0 ; i < n; ++i){
    cin >> l1[i];
  }for(int i = 0 ;i < m ; ++i){
    cin >> l2[i];
  }
  sort(l1, l1+n);
  sort(l2, l2+m);
  bool flag = false;
  vi l;
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      if(l1[i] == l2[j]){
        flag = true;
        l.pb(l1[i]);
      } 
    }
  }
  if(flag){
    cout << l[0] << endl;
  }else {
    cout << min(l1[0]*10 + l2[0], l2[0]*10 + l1[0]) << endl;
  }
}