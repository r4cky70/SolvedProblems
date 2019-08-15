#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; char c;
  int cont = 0;
  scanf("%d", &n);
  map <char, int> conj;
  
  for(int i = 0; i < n; i++){
    scanf("%d %c", &m, &c); cont += m;
    if(conj[c] == 0) conj[c] = m;
    else conj[c] += m;
  }
  
  printf("Total: %d cobaias\n", cont);
  printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", conj['C'], conj['R'], conj['S']);
  printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", conj['C'] * 100/(float)cont, conj['R'] * 100/(float)cont, conj['S'] * 100/(float)cont);
}