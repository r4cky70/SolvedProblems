#include <bits/stdc++.h>
using namespace std;

int main(){
    int b, n, ax, t1, t2, t3;
    while(true){
        cin >> b >> n; map<int,int> sald;
        if(b == 0 && n == 0) break;
        for(int i=1; i <= b; i++){
            cin >> ax;
            sald[i] = ax;
        }
        for(int i=0; i < n; i++){
            cin >> t1 >> t2 >> t3;
            sald[t1] -= t3;
            sald[t2] += t3;
        }
        bool fon = false;34
        for(int i=1; i <= b; i++){
            if(sald[i] < 0){
                fon = true;
                break;
            }
        }
        if (fon == false) cout << "S" << endl;
        else cout << "N" << endl;
    }
}