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

  int n, q, x, a, b, c, d;
  cin >> n >> q;
  vi rolls(n), collums(n);
  for(int i = 0; i < q; ++i){
    cin >> x;
    if(x == 1){
      cin >> a >> b;a--, b--;
      rolls[a]++; collums[b]++;
    }else if(x == 2){
      cin >> a >> b;a--, b--;
      rolls[a]--; collums[b]--;
    }
    else{
      cin >> a >>b >> c >> d; a--,b--,c--,d--;

      ll tot = (c-a+1)*(d-b+1);
      int co = 0;
      for(int i = a; i <= c; ++i){
        if(rolls[i]){
          tot-= (d-b+1);
          co++;
        }
      }
      for(int i = b; i <= d; ++i){
        if(collums[i]){
          tot-= (c-a+1)-co;
        }
      }
      cout << (tot == 0 ? "Yes" : "No") << endl;
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
