#include <bits/stdc++.h>
#define MAXS 100007

using namespace std;

typedef long long ll;
typedef vector <int, int> vi;
typedef pair <int, int> ii;

ii mon[MAXS];



int main(){
  int n, m;
  int v1, v2;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++){
    scanf("%d %d", &v1, &v2);
    mon[i] = make_pair(v1, v2);
  }
  sort(mon, mon + n);
  int p1 = 0, p2 = 0;
  ll max = 0, acum = 0;

  while(p2 < n){  
    if(abs(mon[p2].first - mon[p1].first) < m || (p2 == p1)){
      acum += mon[p2].second;
      p2++;
    }
    else{
      acum -= mon[p1].second;
      p1++;
    }
    if(acum > max) max = acum;
  }
  printf("%lld\n", max);
}
