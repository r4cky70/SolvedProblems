#include <bits/stdc++.h>
#define MAXS 1000007
#define make_pair(a, b) mp(a,b)
#define debug(a) cout << a << '\n';

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

int n, m;

int main(){
  int cont = 1;
  while(scanf("%d %d", &n, &m), n != 0 && m != 0){
    if((double)n / m > 27) printf("Case %d: impossible\n", cont++);
    else printf("Case %d: %d\n", cont++, (n - 1)/m);
  } 
}