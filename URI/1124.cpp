#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, c, r1, r2, maiorr, menorr; double razao;
    while (l != 0 && c != 0 && r1 != 0 && r2 != 0){
        cin >> l >> c >> r1 >> r2;
        if (r1 > r2){
            maiorr = r1; menorr = r2;
        }
        else{
            maiorr = r2; menorr = r1;
        }
        if (l > c){
            razao = maiorr - menorr / maiorr
            if (razao > menorr)
        }
    }
    return 0;
}