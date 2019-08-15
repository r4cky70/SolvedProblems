#include <bits/stdc++.h>
#define MAXS 200007
#define INF 2234567890

#define make_pair(a, b) mp(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

int q, n;
int arr[MAXS];



int main(){
  cin >> q;
  for(int k = 0; k < q; ++k){
    cin >> n;
    map<int, int> dic;
    vi idk;
    for(int i  = 0; i < n*4; ++i){
      cin >> arr[i];
      dic[arr[i]]++;
    }
    bool flag = true;
    for(map<int, int>::iterator it=dic.begin(); it != dic.end(); ++it){
      if((*it).second %2 == 1) flag = false;
      else{
        for(int i = 0; i < (*it).second/2; ++i){
          idk.pb((*it).first);
        }
      }
    }
    sort(idk.begin(), idk.end());
    int ans;
    if(idk.size() > 0) ans = idk[0] * idk[idk.size()-1];
    if(flag == false) cout << "NO\n";
    else{
      for(int i = 1; i < idk.size()/2; ++i){
        if(ans != idk[i] * idk[idk.size()-1-i]) flag = false;
      }
      cout << (flag ? "YES\n" : "NO\n");
    }
  }
}