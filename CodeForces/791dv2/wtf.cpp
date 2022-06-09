#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MAXS = 200007;


void solvetask(){

  int n, q;
  cin >> n >> q;
  vi arr(n);
  map<int, int> changes;
  int sum = 0, mud = -1;
  for(int i = 0; i < n; ++i){
    cin >> arr[n];
    sum+=arr[n];
  }
  // changes[23] = 24;
  // cout << changes[23] << endl;
  int x, a, b;
  for(int i = 0; i < q; ++i){
    cin >> x;
    if(mud == -1){
    if(x == 1){
      cin >> a >> b; a--;
        if(changes.find(a) == changes.end()){
          // debug(n);
          sum += b - changes[a];
        }else{
          sum += b - arr[a];
        }

      }else{
        if(changes[a] != 0){
          sum += b - changes[a];
        }else{
          sum += b - mud;
        }
      }
      changes[a] = b;
      cout << sum << endl;
    }
    else if(x == 2){
      cin >> a;
      mud = a;
      sum = a*n;
      cout << sum << endl;
      changes.clear();
      
    }
  }
  
  
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  // cin >> TT;
  while(TT--) solvetask();
}
