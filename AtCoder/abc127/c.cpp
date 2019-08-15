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

int n, m;
int lista[MAXS];
int acu[MAXS];



int main(){
  cin >> n >> m;
  int a, b;
  for(int i = 0; i < m; ++i){
    cin >> a >> b;
    lista[a]++; lista[b+1]--;
  }
  int ans = 0;
  int temp = 0;
  for(int i = 0; i <= n; ++i){
    temp += lista[i];
    if(temp >= m) ans++;
  }
  cout << ans;
}