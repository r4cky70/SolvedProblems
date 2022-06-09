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

  int n, m;
  cin >> n;
  vi ma(n);
  for(int i = 0; i < n; ++i){
    cin >> ma[i];
  }
  cin >> m;
  vi bob(m);
  for(int i = 0; i < m; ++i){
    cin >> bob[i];
  }
  sort(all(ma));sort(all(bob));
  reverse(all(ma));reverse(all(bob));
  if(ma[0] > bob[0]){
    cout << "Alice" << endl << "Alice" << endl;
  }else if(ma[0] == bob[0]) cout << "Alice" << endl << "Bob" << endl;
  else cout << "Bob\nBob\n";
    
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
