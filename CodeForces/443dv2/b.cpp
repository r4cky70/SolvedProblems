#include <bits/stdc++.h>
#define MAXS 10007
#define INF 2147483647

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int branch = no*2, mid = (l+r)/2
#define all(a) a.begin(), a.end()

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll n, k;
ll arr[MAXS];

int main(){
  cin >> n >> k;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  } 
  ll cont = 0;
  ll cara = arr[0];
  for(int i = 1; i < n; ++i){
    if(cara > arr[i]) ++cont;
    else{
      cara = arr[i];
      cont = 1;
    }
    if(cont >= k) break;
  }
  cout << cara << endl;
}