#include <bits/stdc++.h>
#define MAXS 1000007
#define make_pair(a, b) mp(a,b)
#define debug(a) cout << a << '\n';

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

int s;
int n, o;
double p;


int main(){
  scanf("%d", &s);
  for(int i = 0; i < s; i++){
    scanf("%d %lf %d", &n, &p, &o);
    double q = 1 - p;
    double w = p * pow(q, o-1) / pow(q, n);
    printf("%.4lf\n", w);
  }
}