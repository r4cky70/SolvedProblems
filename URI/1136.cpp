#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 107

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
bool vis[MAXS];


int main(){
  while(cin >> n >> m, n != 0 && m != 0){
    memset(vis, 0, sizeof vis);
    for(int i = 0; i < m ; ++i){
      cin >> lista[i];
    }
    for(int i = 0; i < m; ++i){
      for(int j = 0; j < m; ++j){
        vis[abs(lista[i] - lista[j])] = 1;
      }
    }
    bool flag = true;
    for(int i = 0; i <= n; ++i){
      if(vis[i] == 0) {
        flag = false;
        break;
      }
    }
    cout << (flag ? "Y\n" : "N\n");
  }

}