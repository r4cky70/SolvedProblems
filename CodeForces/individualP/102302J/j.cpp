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
int arr[MAXS];


int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  sort(arr, arr+n);
  ll mid;
  if(n%2){
    mid = arr[n/2];
  }else{
    mid = (arr[n/2] + arr[n/2-1])/2;
  }
  ll r1, r2;
  r1 = mid+1; r2 = mid-1;
  bool flag = false;
  if(mid == 1) {r1 = 2; r2 = 2;}
  else{
    while(flag == false){
      --r1;
      flag = true;
      for(int i = 2; i < sqrt(r1); ++i){
        if(r1%i == 0){
          flag = false;
          break;
        }
      }
    }
    flag = false;
    while(flag == false){
      ++r2;
      flag = true;
      for(int i = 2; i < sqrt(r2); ++i){
        if(r2%i == 0){
          flag = false;
          break;
        }
      }
    }
  }
  ll  ans = 1ll * INF * INF;
  ll cont1 = 0;
  ll cont2 = 0;
  for(int i = 0; i < n; ++i){
    cont1 += abs(arr[i] - r1);
    cont2 += abs(arr[i] - r2);
  }
  cout << min(cont1, cont2);
}