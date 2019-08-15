#include <bits/stdc++.h>
#define make_pair(a, b) mp(a, b)
#define MAXS 100007

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

int main(){
  int n, a, b;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d %d", &a, &b);
    if(a > b) printf(">\n");
    else if(a < b) printf("<\n");
    else if(a == b) printf("=\n");
  }
}