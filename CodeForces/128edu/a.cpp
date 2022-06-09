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

  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  if(l2 < l1){
    swap(l2, l1);
    swap(r2, r1);
  }
  if(l2 >= l1 && l2 <= r1){
    cout << l2 << endl;
  }else{
    cout << l2+l1 << endl;
  }
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
