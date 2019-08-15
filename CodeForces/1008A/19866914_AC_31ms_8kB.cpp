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

string s;
char vogal[5] = {'a', 'e', 'i', 'o', 'u'};


bool in(char a){
  for(int i = 0 ; i < 5; ++i){
    if(a == vogal[i]) return true;
  }
  return false;
}


int main(){
  cin >> s;
  bool ans = true;
  bool flag = false;
  if(!in(s[0]) && s[0] != 'n') flag = true;
  for(int i = 1 ; i < s.size(); ++i){
    if(flag && s[i] == 'n') ans = false;
    else if(flag && !in(s[i])) ans = false;
    else if(flag && in(s[i])) flag = false;
    else if(!flag && s[i] == 'n') flag = false;
    else if(!flag && !in(s[i])) flag = true;
  }
  if(!in(s[s.size()-1]) && s[s.size()-1] != 'n') ans = false;
  cout << (ans ? "YES" : "NO");
}