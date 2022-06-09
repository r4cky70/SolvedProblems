#include <bits/stdc++.h>
#define MAXS 100007
#define INF 2147483647

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int bch = no*2, mid = (l+r)/2
#define all(a) a.begin(), a.end()

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int n;
vi arr;

int main(){
  cin >> n;
  if(n%2){
    for(int i = 1; i <= n*2; ++i){
      arr.pb(i);
    }
    cout << "YES\n";
    int aux = 0;
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < n*2; j+=2){
        ++aux;
        if(aux%2){
          cout << arr[j]+1 << " ";
        }else{
          cout << arr[j] << " ";
        }
      }
    }
  }
  else cout << "NO\n";
}