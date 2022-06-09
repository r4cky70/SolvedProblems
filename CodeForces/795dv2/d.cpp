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
  vector<long long> arr(n);
  bool flag = true;
  for(int i = 0;i < n; ++i){
    cin >> arr[i];
    if(i > 0){
      if(max(arr[i],arr[i-1]) < arr[i]+arr[i-1]) flag = false;
    }
  }
  cout << (flag?"yes":"no") << endl;
    
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
