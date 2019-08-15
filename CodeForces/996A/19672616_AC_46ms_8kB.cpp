#include <bits/stdc++.h>
#define INF 1234567890
#define MAXS 50010

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, m;

int lista[] = {100, 20, 10, 5, 1};

int main(){
  cin >> n;
  int cont = 0;
  for(int i = 0; i < 5; ++i){
    while(n - lista[i] >= 0){
      cont++;
      n -= lista[i];
    }
  }
  cout << cont << endl;
}