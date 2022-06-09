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
  vi tarr;
  int last, acu;
  string s;
  cin >> s;
  for(int i = 0; i < n; ++i){
    if(i == 0) {
      last = s[i];
      acu = 1;
    }
    else{
      if(last == s[i]) acu++;
      else{
        last = s[i];
        tarr.push_back(acu);
        acu = 1;
      }
    }
  }
  tarr.push_back(acu);
  int ans = 0;
  bool flag = false;
  acu = 0;
  for(int i = 0; i < tarr.size(); ++i){
    if(tarr[i]%2){
      if(flag){
        ans+= acu;
        acu = 0;
      }
      else{
        acu = 1;
      }
      flag = !flag;
    }else{
      if(flag) ++acu;
    }
  }
  cout << ans << endl;
    
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
