#include <bits/stdc++.h>
#define MAXS 57

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

char mx[MAXS][MAXS];
bool vis[MAXS][MAXS];

vector <pii> v1, v2;
int d1[4] = {1, 0, 0, -1}, d2[4] = {0, 1, -1, 0};

int n, a1, b1, a2, b2;

bool inside(int a, int b){
  return (a > 0 && a <= n && b > 0 && b<=n);
}

void dfs(int a, int b, vector<pair<int, int>> &vetor){
  vis[a][b] = 1;
  vetor.pb(mp(a, b));
  for(int i = 0; i < 4; ++i){
    int x = a + d1[i], y = b + d2[i];
    if(inside(x, y) && mx[x][y] == '0' && !vis[x][y]){
      dfs(x, y, vetor);
    }
  }
}





int main(){
  cin >> n;
  cin >> a1 >> b1 >> a2 >> b2;
  for(int i = 1; i <= n; ++i){
    for(int j = 1; j <= n; ++j){
      cin >> mx[i][j];
    }
  }
  dfs(a1, b1, v1);
  if(vis[a2][b2]) cout << 0;
  else {
    memset(vis, 0, sizeof vis);
    dfs(a2, b2, v2);
    int max = 1000000000;
    for(int i = 0; i < v1.size(); ++i){
      for(int j = 0; j < v2.size(); ++j){
        int temp = pow(v1[i].first - v2[j].first, 2) + pow(v1[i].second - v2[j].second, 2);
        max = min(temp, max);
      }
    }
    cout << max;
  }
  
}