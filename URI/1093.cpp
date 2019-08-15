#include <bits/stdc++.h>
#define MAXS 5000007
#define make_pair(a, b) mp(a,b)
#define debug(a) cout << a << '\n';

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;


int v1, v2, at, d;

double gamble(int v1, int v2,int at,int d){
  if(at == 3){
    return (double)v1/(v1 + v2) * 100;
  }
  else {
    double p = at / 6.0, q = 1 - p;
    return (1 - (1 - pow(p, v2) / pow(q, v2)) / (1 - pow(p, v1 + v2) / pow(q, v1 + v2))) * 100;
    // return (1 - (pow(p, v2)/ pow(q, v2)) / (1 - (pow(p, v1 + v2) / pow(q, v1 + v2)))) * 100; 
  }
}



int main(){
  while(scanf("%d %d %d %d", &v1, &v2, &at, &d), v1 != 0, v2 != 0, at != 0, d != 0){
    v1 = ceil((double)v1 / d); v2 = ceil((double)v2/d);
    printf("%.1f\n", gamble(v1, v2, at, d));
  }
}