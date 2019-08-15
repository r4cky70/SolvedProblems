#include <bits/stdc++.h>
#define MAXS 500007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n;
string s;

int main(){
  // INP; OUT;
  int t;
  cin >> t;
  for(int oi = 0; oi < t; ++oi){
    cin >> n;
    cin >> s;
    bool flag = 1;
    for(int i = 0; i < s.size()/2; ++i){
      // cout << (int)s[i] << "   " << (int)s[s.size() -1 -i] << endl;
      int x = abs(s[i] - s[s.size() -1 -i]);
      if(!(x ==2 || x == 0)) flag = false;
    }
    cout << (flag ? "YES\n" : "NO\n");
  }
}