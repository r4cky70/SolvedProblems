#include <bits/stdc++.h>
#define MAXS 107
#define mp(a, b) make_pair(a, b)

using namespace std;

typedef long long ll;
typedef vector <int, int> vi;
typedef pair <int, int> ii;

int main(){
  int lista[3];
  scanf("%d %d %d", &lista[0], &lista[1], &lista[2]);
  sort(lista, lista + 3);
  printf("%d\n", lista[1] - lista[0] + lista[2] - lista[1]);
}