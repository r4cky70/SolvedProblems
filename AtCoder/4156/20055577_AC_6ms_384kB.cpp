#include <bits/stdc++.h>
#define MAXS 10007
#define INF 2147483647

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n;
ll lista[MAXS];
int how[MAXS];

int main(){
  cin >> n;
  for(int i = 0 ;i < n; ++i){
    cin >> lista[i];
  }
  sort(lista, lista+n);
  int ans = 0;
  for(int i = 0; i < n; ++i){
    while(lista[i] % 2 == 0 && lista[i] > 0){
      lista[i] /= 2;
      how[i]++;
    }
		ans += how[i];
  }
  
  cout << ans;
}