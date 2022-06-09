#include "bits/stdc++.h"

// #define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;

void solvetask(){

  cout << 1 << endl;
  cout << 200 << " " << 200 << endl;
  for(int i = 0; i < 200; ++i){
    for(int j = 0; j < 200; ++j){
      cout << rand()%1000000 << " ";
    }
    cout << endl;
  }

    
}

int main(){
  // ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  // cin >> TT;
  while(TT--) solvetask();
}
