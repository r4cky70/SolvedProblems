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
  string s;cin >> s;
  int mid = n/2;
  // debug(mid);
  int cont = 0;
  for(int i = mid; i < n; ++i){
    if(i==mid && n%2) continue;
    if(s[i] == s[i-1]) ++cont;
    else break;
    // debug(cont);
  }
  cout << (n%2? 1 + cont*2 : cont*2) << endl;
    
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
