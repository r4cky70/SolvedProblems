#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 200007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int lista[MAXS];
int n;


int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> lista[i];
  }
  ll ans = 0;
  int p1 = 0, p2 = n-1;
  ll a = lista[p1], b = lista[p2];
  while(p1 < p2){
    if(a == b){
      ans = a; 
      p1++; p2--;
      a += lista[p1];
      b += lista[p2];
    }
    else if(a < b){
      p1++;
      a += lista[p1];
    }
    else{
      p2--;
      b += lista[p2];
    }
  }
  cout << ans;
}