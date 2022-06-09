#include "bits/stdc++.h"

#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) cerr <<"[ ";for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<"]\n";

using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MN = 200007;

array<int, MN> arr;


vi bfs(int no, vector<vi>& edges, queue<int>& ans){
  queue<int> fila;
  fila.push(no);
  vector<int> path;
  while(!fila.empty()){
    no = fila.front();
    path.push_back(no);
    fila.pop();
    for(int i = 0; i < edges[no].size(); ++i){
      if(i > 0){
        ans.push(edges[no][i]);
      }else{
        fila.push(edges[no][i]);
      }
    }
  }
  return path;
}

void solvetask(){

  int n;
  cin >> n;
  vector<vi> edges(n);
  int root = -1;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
    arr[i]--;
    if(arr[i] == i) root = i;
    else{
      edges[arr[i]].push_back(i);
    }
  }
  // for(auto i : edges){
  //   for(auto it : i) cout << it << " ";
  //   cout << endl;
  // }cout << endl;
  queue<int> ans;
  ans.push(root);
  vector<vector<int>>resp;
  while(!ans.empty()){
    resp.push_back(bfs(ans.front(), edges, ans));
    ans.pop();
  }
  cout << resp.size() << endl;
  for(auto it : resp){
    cout << it.size() << endl;
    for(auto i : it) cout << i+1 << " ";
    cout << endl;
  }
  cout << endl;
  
}

int main(){
  // ios::sync_with_stdio(false);cin.tie(0);
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
#endif
  int TT = 1;
  cin >> TT;
  while(TT--) solvetask();
}
