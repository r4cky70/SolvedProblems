#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;

void solvetask(){

  int n;
  cin >> n;
  string s; int t;
  map <string, int> sub;
  vector<string> sb;
  for(int i = 0; i < n; ++i){
    cin >> s >> t;
    sb.push_back(s);
    if(sub.find(s) == sub.end()) sub[s] = t;
  }
  string best; int score = 0;
  // cout << sub["ddd"] << endl;
  for(auto i : sub){
    if(i.second > score){
      score = i.second;
      best = i.first;
    }
  }
  for(int i = 0; i < n; ++i){
    if(sb[i] == best){
      score = i+1;
      break;
    }
  }
  cout << score << endl;
    
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  // cin >> TT;
  while(TT--) solvetask();
}
