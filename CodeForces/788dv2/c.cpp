#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;
const int MOD = 1000000007;

void uni(vector<bool>& vis, map<int,int>& dic, int root){
  while(!vis[root]){
    vis[root] = true;
    root = dic[root];
  }
}


void solvetask(){

  int n;
  cin >> n;
  vi arr1(n), arr2(n), arr3(n);
  vector<bool> vis(n+1, false);
  map<int, int> dic;
  // for(auto i : vis) cout << i << " ";
  // cout<<endl;
  for(int i = 0; i < n;++i) cin >> arr1[i];
  for(int i = 0; i < n; ++i) {
    cin >> arr2[i];
    dic[arr1[i]] = arr2[i];
  }
  // for(auto i : dic) cout << i.second << " ";
  // cout << endl;
  for(int i = 0; i < n; ++i) {
    if(arr1[i] == arr2[i]) vis[arr1[i]] = true;
    cin >> arr3[i];
    if(arr3[i] != 0) uni(vis, dic, arr3[i]);
  }
  int ans = 1;
  for(int i = 0; i < n; ++i){
    if(!vis[arr1[i]]){
      uni(vis, dic, arr1[i]);
      ans = ans * 2 % MOD;
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
