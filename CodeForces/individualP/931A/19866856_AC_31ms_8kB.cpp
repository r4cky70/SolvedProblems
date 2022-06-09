#include <bits/stdc++.h>
#define MAXS 500007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(){
  int n;
  int m;
  cin >> n;
  cin >> m;
  int x = abs(n - m);
  int ans = 0;
  int i = 1;
  for(i; i <= x/2; ++i){
    ans += i * 2;
  }
  if(x % 2){
    ans += i;
  }
  cout << ans << endl;
}