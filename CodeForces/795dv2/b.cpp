#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;

void skip(vector<int> &arr, int x, int n){
  for(int i = x+1; i < n; ++i){
    swap(arr[i], arr[i-1]);
  }
}


void solvetask(){

  int n;
  cin >> n;
  vi arr(n);
  
  bool flag = true;
  vi perm(n);
  iota(all(perm), 1);
  int cont = 1, last = 0;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
    if(i == 0){
      last = arr[i];
      continue;
    }
    if(i == n-1){
      if(arr[i] == last) ++cont;
      if(cont == 1) flag = false;
      else{
        skip(perm, n-1-cont, n);
        // reverse(perm.begin()+n-1-cont, perm.begin()+n);
      }
    } 
    if(arr[i] != last){
      if(cont == 1) flag = false;
      else{
        skip(perm, i-cont, i);
        // reverse(perm.begin()+i-cont, perm.begin()+i);
        last = arr[i];
        cont = 1;
      }
    }else ++cont;
  }
  if(n == 1){
    cout << -1 << endl;
    return;
  }
  
  if(flag){
    for(int i = 0;  i < n; ++i){
      cout << perm[i] << " ";
    }cout << endl;
  }else cout << -1 << endl;
  

  
    
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
