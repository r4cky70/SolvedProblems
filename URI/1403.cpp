#include <bits/stdc++.h>
#define MAXS

typedef long long ll;
using namespace std;

map <int, int> dic;
int listah[500 * 500], listal[500 * 500];


int main(){
  int n, m, temp;
  while(scanf("%d %d", &n, &m), n != 0 && m != 0){
    for(int i = 0; i < n; i++){      
      for(int j = 0; j < m; j++){
        scanf("%d", &temp);
        if(dic.find(temp) == dic.end()) dic[temp] = 1;
        else dic[temp]++;
      }
    }
  }
}