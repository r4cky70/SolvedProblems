#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, cont = 0;
    while (true){
        cin >> n; if(n == 0) break;
        cont += 1;
        int lista[2]; lista[0] = 0; lista[1] = 0;
        for(int i=0; i < n; i++){
            cin >> x >> y;
            lista[0] += x; lista[1] += y;
        }
        if(lista[0] < lista[1]) cout << "Teste " << cont << endl << "Beto\n\n";
        else cout << "Teste " << cont << endl << "Aldo\n\n";
    }
}