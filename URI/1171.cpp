#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; map <int, int> dic;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> x;
        if(dic[x] == 0) dic[x] = 1;
        else dic[x] += 1;
    }
    for(map <int, int>:: iterator it = dic.begin(); it != dic.end(); it++){
        cout << (*it).first << " aparece " << (*it).second  << " vez(es)" << endl;
    }
}