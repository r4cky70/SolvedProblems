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
  int n, m;
  cin >> n >> m;
  cout << (n <= 8 && m <= 8 ? "Yay!" : ":(");
}