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

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  // int tot = 0;1
  // for(int i = 1; i < n; ++i){
  //   tot += (s[i-1]-'0')*10+(s[i]-'0');
  // }
  for(int i = n-1; i >= 0; --i){
    if(s[i] == '1'){
      if(i != n-1 && n-i-1 <= k){
        swap(s[i], s[n-1]);
        k-=n-i-1;
      }
      break;
    }
  }
  for(int i = 0; i < n-1; ++i){
    if(s[i] == '1'){
      if(i != 0 && i <= k){
        swap(s[i], s[0]);
        k-=n-i+1;
      }
      break;
    }
  }
  // debug(s);
  int tot = 0;
  for(int i = 1; i < n; ++i){
    tot += (s[i-1]-'0')*10+(s[i]-'0');
  }
  cout << tot << endl;
    
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
