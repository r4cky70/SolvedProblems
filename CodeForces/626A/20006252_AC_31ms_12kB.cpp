#include <bits/stdc++.h>
#define MAXS 507
#define INF 1234567890

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n;
string s;

int main(){
  cin >> n;
  cin >> s;
  int ans = 0;

  for(int i = 1; i <= n; ++i){
    for(int j=0; j< i; ++j){
      pii x = {0, 0};
      for(int k = j; k <= n-i+j; ++k){
        if(s[k] == 'U'){
          x.first++;
        }else if(s[k] == 'D'){
          x.first--;
        }else if(s[k] == 'R'){
          x.second++;
        }else if(s[k] == 'L'){
          x.second--;
        }

      }
      if(x.first == 0 && x.second == 0){
        ans++;
      }
    }
  }
  cout << ans;
}