#include <bits/stdc++.h>
#define MAXS 100007
#define INF 1234567890

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;


string s;
map<char, vector<int> > charac;


int main(){
  cin >> s;
  for(int i = 'a' ; i <= 'z'; ++i){
    charac[i].push_back(0);
  }
  for(int i = 0 ; i<s.size(); ++i){
    charac[s[i]].pb(i+1);
  }
  for(int i = 'a' ; i <= 'z'; ++i){
    charac[i].push_back(s.size()+1);
  }
  int ans = INF;
  for(auto it : charac){
    int temp = 0;
    // if((it.second.size() > 2))cout << it.first << endl;
    for(int i = 0 ; i < it.second.size() - 1; ++i){
      temp = max(it.second[i + 1] - it.second[i], temp);
      // if((it.second.size() > 2))cout << it.second[i] << " ";
    }
    // if((it.second.size() > 2))cout << it.second[it.second.size()-1] << endl;
    if(it.second.size() > 2) ans = min(ans, temp);
  }
  cout << ans;
}