#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, h2, m1, m2, tot;
    while (true){
        cin >> h1 >> m1 >> h2 >> m2;
        if(h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) break;
        if(h1 == h2 && m1 == m2) cout << 0 << endl;
        else if(h1 * 60 + m1 < h2 * 60 + m2){
            tot = -(h1 * 60 + m1) + h2 * 60 + m2;
            cout << abs(tot) << endl;
        }
        else{
            tot = (h2 + 24) * 60 + m2 - h1 * 60 - m1;
            cout << abs(tot) << endl;
        }
        
    }
}