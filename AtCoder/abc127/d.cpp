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

int n, m, a, b;
int lista[MAXS];
vector <pii > vetor;
vector <int> o;


int main(){
  cin >> n >> m;
  for(int i = 0; i < n; ++i){
    cin >> lista[i];
  }
  sort(lista, lista+n);
  for(int i = 0; i < m; ++i){
    cin >> a  >> b;
    vetor.pb(mp(b, a));
  }
  sort(vetor.begin(),vetor.end());
  reverse(vetor.begin(), vetor.end());
  for(int i = 0; i < vetor.size(); ++i){
    if(o.size() >= n) break;
    for(int j = 0; j < vetor[i].second; ++j){
      o.pb(vetor[i].first);
      if(o.size() >= n) break;
    }
  }
  // reverse(o.begin(), o.end());
  ll ans = 0;
  int i;
  for(i = 0; i < o.size(); ++i){
    ans += max(o[i], lista[i]);
  }
  for(i; i < n; ++i){
    ans+=lista[i];
  }
  cout << ans;
}