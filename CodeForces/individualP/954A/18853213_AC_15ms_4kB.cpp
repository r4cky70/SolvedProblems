#include <bits/stdc++.h>
#define MAXS 107
#define mp(a, b) make_pair(a, b)

using namespace std;

typedef long long ll;
typedef vector <int, int> vi;
typedef pair <int, int> ii;

int main(){
  int n;
  scanf("%d", &n);
  string s;
  int kara = n;
  cin >> s;
  if(n == 1){printf("1\n"); return 0;}
  for(int i = 0; i < n + 1; i++){
    if((s[i] == 'R' && s[i + 1] == 'U') || (s[i] == 'U' && s[i + 1] == 'R')){
      kara--;
      i++;
    }
  }
  printf("%d\n", kara);
}