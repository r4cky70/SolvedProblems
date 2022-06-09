#include <bits/stdc++.h>
#define MAXS 200007
#define INF 2234567890

#define make_pair(a, b) mp(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

ll n;
ll arr[MAXS];

int main(){
  cin >> n;
  for(int i = 0 ; i < n; ++i){
    cin >> arr[i];
  }
  sort(arr, arr+n);
  ll r = arr[n-1];
  ll l = arr[0];
  ll m;
  for(int i = 0; i < n; ++i){
    m = INF;
    if(i > 0){
      m = abs(arr[i-1] - arr[i]);
    }
    if(i < n-1){
      m = min(abs(arr[i+1] - arr[i]), m);
    }
    cout << m << " " << max(abs(arr[i] - r), abs(arr[i] - l)) << "\n";
  }
}