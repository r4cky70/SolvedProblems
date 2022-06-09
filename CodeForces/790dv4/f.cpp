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

  int n, k;
  cin >> n >> k;
  vi arr(n);
  for(int i =0; i < n; ++i){
    cin >> arr[i];
  }
  sort(all(arr));
  int cont = 0, last;
  vi t;
  for(int i = 0; i < n; ++i){
    if(i == 0) last = arr[i];
    if(arr[i] == last) ++cont;
    if(arr[i] != last){
      if(cont >= k) t.push_back(last);
      cont = 1;
      last = arr[i];
    }
  }
  if(cont >= k) t.push_back(last);
  if(t.size() == 0){
    cout << -1 << endl;
    return;
  }
  int la = 0, ra = 0;
  int l = t[0], r = t[0];
  // for(auto i : t) cout << i << " ";
  // cout << endl;
  for(int i = 0; i < t.size(); ++i){
    if(i > 0){
      if(t[i] - t[i-1] == 1){
        r = t[i];
      }
      else{
        l = t[i];
        r = t[i];
      }
    }
    // debug(r-l);
    if(r-l >= ra-la){
      ra = r;
      la = l;
    }
  }
  cout << la << " "<< ra << endl;



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
