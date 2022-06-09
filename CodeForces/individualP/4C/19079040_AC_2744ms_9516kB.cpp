#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef vector <int> vi;
typedef pair <int, int> pi;

#define mp make_pair

const int MAXS = 200007;

int n;
map <string, int> dic;
string s;
int repeat;

int main(){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> s;
    if(!dic[s]) {
      dic[s] = 1;
      printf("OK\n");
    }
    else{
      dic[s + to_string(dic[s])] = 1;
      cout << s + to_string(dic[s]) << endl;
      dic[s]++;
    }
  }
}
