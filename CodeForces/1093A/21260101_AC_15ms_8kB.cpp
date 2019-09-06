#include <bits/stdc++.h>
#define MAXS 200007
#define INF 1234567890

#define make_pair(a, b) mp(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

int main(){
  int n;
  int a;
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> a;
    cout << a / 7 + (a%7? 1 : 0) << endl;
  }
}