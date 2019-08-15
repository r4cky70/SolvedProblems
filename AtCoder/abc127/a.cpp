#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 100007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main(){
  int a, b;
  cin >> a >> b;
  if(a <= 5) cout << 0 <<endl;
  else if(a <=12) cout << b/2 <<endl;
  else cout << b;
}