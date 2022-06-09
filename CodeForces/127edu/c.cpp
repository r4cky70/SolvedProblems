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

int upperbound(vi &arr, int X, int id)
{
    int mid;
 
    // Initialise starting index and
    // ending index
    int low = 0;
    int high = arr.size()-1;
 
    // Till low is less than high
    while (low < high) {
        // Find the middle index
        mid = low + (high - low) / 2;
 
        // If X is greater than or equal
        // to arr[mid] then find
        // in right subarray
        if (X >= arr[mid]+(mid+1)*id) {
            low = mid + 1;
        }
 
        // If X is less than arr[mid]
        // then find in left subarray
        else {
            high = mid;
        }
    }
   
    // if X is greater than arr[n-1]
    if(low < arr.size()-1 && arr[low] <= X) {
       low++;
    }
 
    // Return the upper_bound index
    return low;
}

void solvetask(){

  int n, x;
  cin >> n >> x;
  vi arr(n);
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  sort(all(arr));
  for(int i = 1; i < n; ++i){
    arr[i] = arr[i-1]+arr[i];
  }
  // debugarr(arr, n);
  int ans = 0;
  int id = 0;
  int u = 1;
  do{
    u = upperbound(arr, x, id);
    // cout << "alo" << endl;
    ans += u+1;
    id++;
    debug(u);
    // debug(u);
    // debug(id);
  }while(u > 1);
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
