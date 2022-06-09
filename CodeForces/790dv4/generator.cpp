#include <bits/stdc++.h>
using namespace std;


int main(){
  cout << 1 << endl;
  cout << 200 << " " << 200 << endl;
  for(int i = 0; i < 200; ++i){
    for(int j = 0; j < 200; ++j){
      if(j != 0) cout << " ";
      cout << rand()%1000000;
    }
    cout << endl;
  }
}