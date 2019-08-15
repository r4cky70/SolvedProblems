#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, f, tot;
    cin >> i >> f;
    if (i >= f){
        tot = 24 - i + f;
    }
    else{
        tot = f - i;
    }
    cout << "O JOGO DUROU " << tot << " HORA(S)" << endl;
}