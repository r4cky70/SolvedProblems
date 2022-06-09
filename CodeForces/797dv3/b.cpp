#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;

void solvetask(){

  int n;
  cin >> n;
  vector<long long> a(n), b(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }for(int i = 0; i < n; ++i){
    cin >> b[i];
  }
  vector<ll> c(n);
  ll mai = 0;
  for(int i = 0; i < n; ++i){
    c[i] = a[i] - b[i];
    mai = max(mai, c[i]);
  }
  bool ans = true;
  for(int i = 0; i < n; ++i){
    if(c[i] < mai && b[i] != 0) ans = false;   
  }
  cout << (ans?"yes":"no") << endl;
    
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
