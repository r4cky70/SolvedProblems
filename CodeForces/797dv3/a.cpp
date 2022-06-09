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
  int a, b, c;
  a = n/3;
  b = n/3+1;
  c = n/3-1;
  if(n%3 == 2){
    ++a; ++b;
  }else if(n%3 == 1) ++b;
  cout << a << " " << b << " " << c << endl;
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
