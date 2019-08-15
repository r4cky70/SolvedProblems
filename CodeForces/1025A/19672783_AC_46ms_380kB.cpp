#include <bits/stdc++.h>
#define INF 1234567890
#define MAXS 2000007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n;
string s;
set <char> conju;
map<char, int> dic;

int main(){
  cin >> n;
  cin >> s;

  if(s.size() == 1) {cout << "Yes\n"; return 0;}
  for(int i = 0; i < n; ++i){
    dic[s[i]]++;
  }
  for(auto it = dic.begin(); it != dic.end(); ++it){
    if((*it).second > 1){
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
}