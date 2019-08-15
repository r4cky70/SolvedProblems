#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 107

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

bool funct(pair<int, pair<string, int> >a, pair <int, pair<string, int> >b){
  if(a.second.first == b.second.first){
    return a.second.second > b.second.second;
  }
  else return a.second.first < b.second.first;
}


pair <int, pair<string, int> > lista[MAXS];


int main(){
  int n;cin >> n;
  int b; string a;
  for(int i = 1 ; i <= n; ++i){
    cin >> a >> b;
    lista[i] = mp(i, mp(a, b));
  }
  sort(lista+1, lista+n+1, funct);
  for(int i = 1; i <= n; ++i){
    cout << lista[i].first << "\n";
  }
}