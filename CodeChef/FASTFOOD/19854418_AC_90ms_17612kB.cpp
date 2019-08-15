#include <bits/stdc++.h>
#define INF 1234567891
#define MAXS 100007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int t, n;
int d1[MAXS], d2[MAXS];
ll s1[MAXS], s2[MAXS];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  // INP; OUT;
  cin >> t;
  for(int wo = 0; wo < t; ++wo){
    cin >> n;
    for(int i = 0; i < n; ++i){
      cin >> d1[i];
    }
    for(int i = 0; i < n; ++i){
      cin >> d2[i];
    }
    // s1[n-1] = d1[n-1]; s2[n-1] = d2[n-1];
    // for(int i = n-2; i > -1; --i){
    //   s1[i] = s1[i+1] + d1[i];
    //   s2[i] = s2[i+1] + d2[i];
    // }
    s1[0] = d1[0]; s2[0] = d2[0];
    for(int i = 1; i < n; ++i){
      s1[i] = s1[i-1] + d1[i];
      s2[i] = s2[i-1] + d2[i];
    }
    ll ans = max(s1[n-1], s2[n-1]);

    for(int i = n-1; i > 0; --i){
      ans = max(s1[i-1] + s2[n-1] - s2[i - 1], ans);
    }
    // bool flag = false;
    // for(int i = 0; i < n; ++i){
    //   if(s1[i] == s2[i] && d1[i] < d2[i]){
    //     flag = true;
    //   }
    //   else if(s1[i] < s2[i]) flag = true;
    //   ans += (flag ? d2[i] : d1[i]);
    // }
    cout << ans << "\n";
  }
}