#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int MN = 100007;
ll ans;
string cor;

void dfs(int no, vector<vector<int>>& edges, pii aux){
  aux.first += (cor[no] == 'W');
  aux.second += (cor[no] == 'B');
  for(int i = 0; i < edges[no].size(); ++i){
    dfs(edges[no][i], edges, aux);
  }
  if(aux.first == aux.second) ++ans;
}

pii dfs(int no, vector<vector<int>>& edges){
  if(edges[no].size() == 0) return make_pair((cor[no] == 'W'), (cor[no] == 'B'));
  pii temp = make_pair((cor[no] == 'W'), (cor[no] == 'B'));
  for(int i = 0; i < edges[no].size(); ++i){
    pii aux = dfs(edges[no][i], edges);
    temp.first += aux.first; temp.second += aux.second;
  }
  if(temp.first == temp.second)++ans;
  return temp;
}



void solvetask(){

  int n;
  cin >> n;
  int temp;
  vector<vector<int>> edges(n);
  for(int i = 0; i < n-1; ++i){
    cin >> temp;
    edges[temp-1].push_back(i+1);
  }
  cin >> cor;
  ans = 0;
  dfs(0, edges);
  cout << ans << endl;
}

int main(){
  ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  cin >> TT;
  while(TT--) solvetask();
}
