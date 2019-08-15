#include <bits/stdc++.h>
#define MAXS 400007
#define INF 2234567890

#define make_pair(a, b) mp(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

ll arr[MAXS];
int n;



int main(){
  cin >> n;
  for(int i = 0 ;i < n; ++i){
    cin >> arr[i];
  }
  ll a = arr[0];
  for(int i = 1;  i < n; ++i){
    a = __gcd(arr[i], a);
  }
  int ans = 1;
  for(int i = 2; i < sqrt(a); ++i){
    if(a % i == 0){
      ++ans;
    }
  }
  ans*=2;
  if(sqrt(a) == (int)sqrt(a)){
    ++ans;
  }
  if(a == 1) cout << 1 << "\n";
  else{
    cout << ans << "\n";

  }
}