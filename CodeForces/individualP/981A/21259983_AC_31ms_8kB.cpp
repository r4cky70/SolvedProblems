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

int main(){
  string s;
  cin >> s;
  int n = s.size();
  int ans = 0;
  for(int i = 0; i < n-1; ++i){
    bool flag = false;
    for(int j = 0; j < (n-i)/2; ++j){
      if(s[j] != s[n-j-1-i]) flag = true;
    }
    if(flag){
      ans = n-i;
      break;
    }
    
  }
  cout << ans << endl;
}