#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) cerr <<"[ ";for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<"]\n";

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MN = 100007;

void solvetask(){

  int n;
  cin >> n;
  vi arr(n);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  bool flag = arr[0]%2;
  bool ans = true;
  for(int i = 0; i < n; i+=2){
    if((arr[i]%2 ^ flag)) ans = false;
  }
  flag = arr[1]%2;
  for(int i = 1; i < n; i+=2){
    if((arr[i]%2 ^ flag)) ans = false;
  }
  cout << (ans?"YES":"NO") << endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  cin >> TT;
  while(TT--) solvetask();
}
