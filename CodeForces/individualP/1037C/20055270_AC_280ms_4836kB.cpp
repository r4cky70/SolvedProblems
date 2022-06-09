#include <bits/stdc++.h>
#define MAXS 5007
#define INF 1234567890

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

string s1, s2;

int main(){
  int n; cin >> n;
  cin >> s1 >> s2;
  int ans = 0;
  if(s1.size() == 1) {
    if(s1[0] != s2[0]) ans += 1;
  }
  else{
    int i = 0;
    for(i = 0; i < s1.size(); ++i){
      if(i == s1.size()){
        if(s1[i] != s2[i])++ans;
      }
      if(s1[i] != s1[i+1] && s1[i] != s2[i] && s1[i+1] != s2[i+1]){
        ++i;
        ans++;
      }else if(s1[i] != s2[i]){
        ans++;
      }
    }
  }
  cout << ans;
}