#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector<ll> vll;

const int MN = 100007;

void solvetask(){

  ll n, k;
  cin >> n >> k;
  vll arr(n);
  ll ans = 0;
  vll ta(k);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
    ans+=arr[i]/k;
    arr[i]%=k;
    ta[arr[i]]++;
  }
  // for(auto i : ta) cout << i << " ";
  // cout << endl;
  for(int i = k-1; i >= 0; --i){
    for(int j = 0; j < k && ta[i] > 0; ++j){
      if(j + i >= k && ta[j] > 0){
        if(j == i){
          ll temp = ta[i]/2;
          ta[i]-=temp;
          ans += temp;
        }
        else{
          ll temp = min(ta[j], ta[i]);
          ta[i] -= temp;
          ta[j] -= temp;
          ans+= temp;

        }
      }
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
