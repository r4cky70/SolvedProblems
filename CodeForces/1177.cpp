#include <bits/stdc++.h>
#define MAXS 100007
#define INF 1234567890

#define mp(a, b) make_pair(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

ll n;

int form(ll x){
  if(x <= 9) return x;
  x-=9;
  int con = 1;
  for(int i = 0; i < 12; ++i){
    con*=10;
    if(x < con){

    }
  }
}


int main(){
  cin >> n;
}