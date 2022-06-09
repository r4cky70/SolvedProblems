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
const int MN = 100007;
class dsu{
  private:
    vector<int> parent;
    // vector<int> size;
  public:
    dsu(int n){
      parent = vector<int>(n);
      // size = vector<int>(n);
      iota(parent.begin(), parent.end(), 0);
      // fill(size.begin(), size.end(), 1);
    }

    int find_set(int v){
      if(parent[v] == v) return v;
      else{
        return parent[v] = find_set(parent[v]);
      }
    }

    void union_sets(int a, int b){
      a = find_set(a); b = find_set(b);
      if(a != b){
        // if(size[a] < size[b])
          // swap(a, b);
        parent[b] = a;
        // size[a] += size[b];
      }
    }
};

void solvetask(){

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  dsu conj(26);
  for(int i = 0; i < n; ++i){
    while(k>0 && conj.find_set(s[i]-'a') != 0){
      int temp = conj.find_set(s[i]-'a');
      // debug(temp); 
      conj.union_sets(temp-1, temp);
      k--;
    }
  }
  for(int i = 0; i < n; ++i){
    cout << (char)(conj.find_set(s[i]-'a')+'a');
  }cout << endl;
  
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
