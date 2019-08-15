#include <bits/stdc++.h>
#define INF 1234567890
#define MAXS 2000007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int lista[MAXS];
bitset <MAXS> cri;

void sieve(){
  cri.set();
  cri[0] = cri[1] = 0;
  for(int i = 2; i < MAXS; ++i){
    if(cri[i]){
      for(int j = i + i; j < MAXS; j += i){
        cri[j] = 0;
      }
    }
  }
}
int n;

int main(){
  sieve();
  cin >> n;
  for(int i = 4; i < MAXS; ++i){
    if(!cri[i]){
      for(int j = i; j < MAXS; ++j){
        if(!cri[j] && i + j > n) break;
        if(!cri[j] && i + j == n){
          cout << i << ' ' << j << endl;
          return 0;
        }
      }

    }
  }
}