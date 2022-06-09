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
  for(int i = 0; i < n; ++i){
    string x;
    cin >> x;
    if(x.size() > 2){
      char mi = '9';
      for(int i = 0; i < x.size(); ++i){
        if(x[i] < mi) mi = x[i];
      }
      cout << mi << endl;
    }else cout << x[1] << endl;
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
