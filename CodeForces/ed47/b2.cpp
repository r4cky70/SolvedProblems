#include <bits/stdc++.h>

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
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

ll os, f;
char s[MAXS]; string str;
vector<int> ans;
 

void solve(){

    scanf("%s", s); str = s;
 
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '0') ans.push_back(0);
        else if(str[i] == '2') ans.push_back(2);
        else os++;
    }
 
    for(int i = 0; i < ans.size(); i++) {
        if(ans[i] == 2) {
            while(os) {
                os--;
                printf("1");
            }
            printf("2");
        }
        else printf("0");
    }
    while(os) {
        os--;
        printf("1");
    }
    puts("");
}

int main(){
  cout.precision(12);
  cout << fixed;
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  solve();
  cerr << "Time: " << 1.0*clock()/CLOCKS_PER_SEC << " s.\n";
#else
  // ios::sync_with_stdio(false);cin.tie(0);
  // solve();
#endif
}
