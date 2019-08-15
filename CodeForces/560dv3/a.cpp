#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 107

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(){
  int n, x, y;
  string s;
  cin >> n >> x >> y;
  cin >> s;
  int cont = 0;
  if(s[s.size()-x-1] == '0') ++cont;
  for(int i = s.size()-x; i < s.size(); ++i){
    if(i != s.size() - y -1){
      if(s[i] == '1') ++cont;
    }
  }
  if(s[s.size() - y - 1] == '0') ++cont;
  cout << cont;
}