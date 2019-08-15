#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, t, cont;
    while(cin >> n >> m, n !=0 && m != 0){
        map <int, int> dic;
        cont = 0;
        for(int i=0; i < m; i++){
            cin >> t;
            if(dic[t] == 0){
                dic[t] = 1;
            }
            else{
                if(dic[t] == 1) cont += 1;
                dic[t] += 1;
            }
        }
        cout << cont << endl;
    }
}