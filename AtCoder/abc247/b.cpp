#include <bits/stdc++.h>

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define endl "\n"
#define all(a) a.begin(), a.end()
#define debug(...) cerr<<"["<<#__VA_ARGS__<<": "<<(__VA_ARGS__)<<"]\n"
#define debugarr(a, b) for(int i=0;i<b;++i)\
cerr<<a[i]<<" "; cerr<<endl

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector < int > vi;
typedef vector < ll > vll;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int INF = (int)__builtin_inf();
const int MAXS = 107;

// map<string, int> dic;
int n;
string arr[MAXS][2];
// bool ans = false;

// void solve(int id, int v){
//   dic[arr[id][v]]++;
//   // debug(dic[arr[id][v]]);
//   if(id < n-1){
//     solve(id+1, 0);
//     solve(id+1, 1);
//   }
//   else{
//   bool flag = true;
//     for(auto& it : dic){
//       if(it.second >= 2) flag = false;
//     }
//   if(flag) ans = true;
//   }
//   dic[arr[id][v]]--;
// }

void solvetask(){

  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> arr[i][0]; cin >> arr[i][1];
  }
  bool flag = false;
  for(int i = 0; i < n;++i){
    bool f1 = false, f2 = false;
    for(int j = 0; j < n;++j){
      if(j == i) continue;
      if(arr[i][0] == arr[j][0] || arr[i][0] == arr[j][1]) f1 = true;
      if(arr[i][1] == arr[j][0] || arr[i][1] == arr[j][1]) f2 = true;
      if(f1 && f2) flag = true;
    }
  }
  cout << (flag? "No" : "Yes");
}

int main(){
  cout.precision(12);
  cout << fixed;
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  solve();
  cerr << "Time: " << 1.0*clock()/CLOCKS_PER_SEC << " s.\n";
#else
  ios::sync_with_stdio(false);cin.tie(0);
  solvetask();
#endif
}
