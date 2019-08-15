#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2, tot;
    cin >> h1 >> m1 >> h2 >> m2;
    if ((h1 < h2) || (h1 == h2 && m1 < m2)){
        tot = -h1 * 60 + -m1 + h2 * 60 + m2;
    }
    else{
        tot = 24 * 60 - h1 * 60 - m1 + h2 * 60 + m2;
    }
    cout << "O JOGO DUROU " << tot / 60 << " HORA(S) E " << tot % 60 << " MINUTO(S)\n";
    return 0;
}