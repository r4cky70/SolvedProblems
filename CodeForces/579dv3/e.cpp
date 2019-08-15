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

int n;
int arr[MAXS];
bool idk[MAXS];



int main(){
  cin >> n;
  for(int i = 0; i < n; ++i){
    cin >> arr[i];
  }
  sort(arr, arr+n);
  int cont = 0;
  for(int i = 0; i < n; ++i){
    if(arr[i] == 1){
      if(idk[1] == false){
        idk[1] = true;
        ++cont;
      }else if(idk[2] == false){
        idk[2] = true;
        ++cont;
      }
    }else{
      if(idk[arr[i]-1] == false){
        idk[arr[i]-1] = true;
        ++cont;
      }else if(idk[arr[i]] == false){
        idk[arr[i]] = true;
        ++cont; 
      }else if(idk[arr[i]+1] == false){
        idk[arr[i]+1] = true;
        ++cont;
      }
    }
  }
  cout << cont << "\n";
}