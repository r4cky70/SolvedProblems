#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 200007

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
  string ans = "";
  for(int i = 0; i < n; i++){
    if(i == n-1) break;
    if(s[i] != s[i + 1]){
      ans += s[i];
      ans += s[i + 1];
      i++;
    }
  }
  cout << s.size() - ans.size() << endl;
  cout << ans;
}