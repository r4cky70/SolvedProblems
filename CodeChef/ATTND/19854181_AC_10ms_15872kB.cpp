#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 107

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int c, n;
string s1, s2;
map<string, int> dic;
pair<string, string> lista[MAXS];

int main(){
  while(cin >> c){
    for(int j = 0; j < c; ++j){
      cin >> n;
      for(int i = 0; i < n; ++i){
        cin >> s1 >> s2;
        dic[s1]++;
        lista[i] = mp(s1, s2);
      }
      for(int i = 0; i < n; ++i){
        if(dic[lista[i].first] != 1){
          cout << lista[i].first + " " + lista[i].second + "\n";
        }
        else cout << lista[i].first + "\n";
      }
    }
  }
}