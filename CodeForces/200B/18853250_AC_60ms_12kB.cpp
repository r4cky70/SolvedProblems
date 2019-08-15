#include <bits/stdc++.h>
#define MAXS 107
#define mp(a, b) make_pair(a, b)

using namespace std;

typedef long long ll;
typedef vector <int, int> vi;
typedef pair <int, int> ii;

int lista[MAXS];


int main(){
  int n, tot = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &lista[i]);
    tot += lista[i];
  }
  printf("%.12lf\n", tot / double(n));

}