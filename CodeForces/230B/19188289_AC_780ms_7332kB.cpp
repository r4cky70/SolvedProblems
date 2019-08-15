#include <bits/stdc++.h>
using namespace std;

#define mp(a, b) make_pair(a, b)
#define debug(a) cout << a << '\n'
#define MAXS 1000007

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

double x;
bitset<MAXS>cri;
map <ll, bool> dic;

ll n;
void xsieve(){
  cri.set();
  cri[0] = cri[1] = 0;
  
  for(ll i = 2; i < MAXS; i++){
    if(cri[i]){
      dic[i * i] = 1;
      for(int j = i + i; j < MAXS; j += i){
        cri[j] = 0;
      }
    }
  }
}


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  xsieve();
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x;
    cout << (dic[x] ? "YES\n" : "NO\n");
  }

}