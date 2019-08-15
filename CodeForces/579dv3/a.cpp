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

int arr[MAXS];

int main(){
  int n, q;
  cin >> q;
  for(int k=0; k < q; ++k){
    cin >>  n;
    for(int j = 0; j < n;  ++j){
      cin >> arr[j];
    }
    bool flag1 = true;
    bool flag2 = true;
    if(n > 1){
      for(int i = 1; i < n; ++i){
        if(arr[i] == 1){
          if(arr[i-1]-arr[i] != 1){
            flag1=false;
          }
        }else if(arr[i] == n){
          if(arr[i]-arr[i-1] != 1){
            flag2=false;
          }
        }else{
          if(arr[i]-arr[i-1] != 1){
            flag2=false;
          }
          if(arr[i-1]-arr[i] != 1){
            flag1=false;
          }
        }
      }

    }

    cout << (flag1 || flag2 ? "YES\n" : "NO\n");



  }
}