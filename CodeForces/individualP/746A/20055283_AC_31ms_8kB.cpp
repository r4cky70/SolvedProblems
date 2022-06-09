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

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int x, y, z;
  x = a/1; y = b/2; z = c/4;
  cout << min(x,min(y, z))*7;
}