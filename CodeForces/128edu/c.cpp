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

  string s;
  cin >> s;
  vi arr;
  bool flag = false;
  int cont = 0;
  int cost = 0;
  for(int i = 0; i < s.size(); ++i){
    if(!flag && s[i] == '1'){
      flag = true;
    }else if(flag && s[i] == '0') cont++;
    else if(flag && s[i] == '1'){
      arr.push_back(cont);
      cost+= cont;
      cont = 0;
    }
  }
  int p1 = 0, p2 = arr.size()-1;
  cont = 0;
  int ans = (int)__builtin_inf();
  while(p1 > p2){
    if(abs((cost-arr[p1])-cont+1) )
  }
  // for(auto i : arr) cout << i << " ";
  // cout << endl;
  for()
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
