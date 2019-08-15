#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 100007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n;
int lista[MAXS];
vi pos, neg;

int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> lista[i];
    if(lista[i] >= 0) pos.pb(lista[i]);
    else neg.pb(lista[i]);
  }
  sort(pos.begin(), pos.end());
  sort(neg.begin(), neg.end());
  int sum = 0;
  for(int i = 0; i < pos.size(); ++i){
    sum += pos[i];
  }
  if(sum % 2) cout << sum;
  else{
    int m1 = 0, m2 = 0;
    for(int i = 0; i < pos.size(); ++i){
      if(pos[i] % 2){
        m1 = pos[i];
        break;
      }
    }
    for(int i = neg.size() - 1; i > -1; --i){
      if(neg[i] % 2){
        m2 = neg[i];
        break;
      }
    }
    if(m1 == 0) cout << sum + m2;
    else if(m2 == 0) cout << sum - m1;
    else if(m1 > -m2) cout << sum +m2;
    else cout << sum - m1;
  }

}