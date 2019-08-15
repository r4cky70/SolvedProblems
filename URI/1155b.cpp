#include <bits/stdc++.h>
#define MAXS 100007

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

int n;
string s;

int main(){
  cin >> n;
  cin >> s;
  int x = n - 11;
  int cont = 0;
  for(int i = 0; i < x; ++i){
    if(s[i] == '8') cont++;
  }
  if(cont >= x / 2) cout << "YES\n";
  else cout << "NO\n";

}