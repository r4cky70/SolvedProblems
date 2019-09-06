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

set<int> se;

int main(){
  int n;
  cin >> n;
  int arr[MAXS];
  bool flag = false;
  for(int i = 0 ; i  < n; ++i){
    cin >> arr[i];
    se.insert(arr[i]);
    if(arr[i] == 0) flag = true;
  }
  cout << se.size() - (flag ? 1 : 0) << endl;
}