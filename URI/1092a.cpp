#include <bits/stdc++.h>
#define MAXS 200

using namespace std;
typedef long long ll;

int main(){
  int t, n, m;
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    scanf("%d %d", &n, &m);
    string s = ""; int cont = 0;
    bool flag = false;
    while(true){
      for(int j = 0; j < m;j++){
        s += 'a' + j; cont++;
        if(cont == n) {flag = true; break;}
      }
      if(flag) break;
    }
    cout << s << endl;
  }
}