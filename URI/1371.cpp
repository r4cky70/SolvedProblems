#include <bits/stdc++.h>
#define MAXS 5007
#define make_pair(a, b) mp(a,b)
#define debug(a) cout << a << '\n'

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

bitset<MAXS> cri;
vi prims;

void sieve(){
  cri.set();
  cri[0] = cri[1] = 0;
  for(int i = 2; i < MAXS; ++i){
    if(cri[i]){
      prims.push_back(i);
      for(int j = i + i; j < MAXS; j += i){
        cri[i] = 0;
      }

    }
  }
}



int n;
int main(){
  sieve();
  while(scanf("%d", &n), n != 0){
    printf("1");
    for(int i = 0;  prims[i] * prims[i] <= n; ++i){
      printf(" %d", prims[i] * prims[i]); 
    }
    printf("\n");
  }
}