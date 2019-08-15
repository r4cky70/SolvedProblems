#include <bits/stdc++.h>
#define MAXS 5007
#define INF 1234567890

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define BZ freopen("input.txt", "r", stdin)
#define BX freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

ll n;
ll mod = 1000000007;

ll mult(ll a, ll b){
  return ((a % mod) * (b%mod))%mod;
}
ll sum(ll a, ll b){
  return ((a % mod) + (b%mod))%mod;
}


ll fastexp(ll a, ll b){
  if(b == 0) return 1;
  if(b == 1) return a;
  if(b%2){
    return mult(fastexp(a, b-1), a)%mod;
  }
  ll x = mult(a, a);
  return fastexp(x, b/2)%mod;
}



int main(){
  cin >> n;
  
  cout << (n==0 ? 1 : sum(fastexp(2, n*2-1), fastexp(2, n-1)));
}