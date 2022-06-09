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
const int MAXS = 100007;
 
void solve(){

  map<int, int> dic;
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i : arr){
    cin >> arr[i];
    dic[arr[i]]++;
  }
  int maxi = 0, nr = 0;
  for(auto it : dic){
    if(it.second > nr){
      maxi = it.first;
      nr = it.second;
    }
  }
  int x = n - nr;
  bool op = false;
  int ans = 0;
  while(x > 0){
    if(!op){
      ++ans;
      op = !op;
    }else{
      op=!op;
      if(x-nr > 0){
        ans+=nr;
        x-=nr;
        nr*=2;
      }else{
        ans+= x;
        x = 0;
      }
    }

  }
  cout << ans << endl;
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
  int t;
  cin >> t;
  while(t--){
  solve();
  }
#endif
}
