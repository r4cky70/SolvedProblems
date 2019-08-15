#include <bits/stdc++.h>
#define MAXS 10007
#define make_pair(a, b) mp(a,b)
#define debug(a) cout << a << '\n'

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

int n;
string str1[MAXS], str2[MAXS];

long long gcd(ll a, ll b){
  if(a == 0) return b;
  if(b == 0) return a;
  return (gcd(b, a%b));
}



ll stan(string str){
  long long cont = 0;
  if(str[str.size() - 1] == '1') cont++;
  for(int i = str.size() - 2; i > -1; i--){
    cont += (str[i] - '0') * (2 << (int)str.size() - 2 - i);
  }
  return cont;
}


int main(){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> str1[i];
    cin >> str2[i];
  }
  int cont = 0;
  for(int i = 0; i < n; i++){
    if(gcd(stan(str1[i]), stan(str2[i])) > 1){
      printf("Pair #%d: All you need is love!\n", ++cont);

    } 
    else printf("Pair #%d: Love is not all you need!\n", ++cont);
  }
}