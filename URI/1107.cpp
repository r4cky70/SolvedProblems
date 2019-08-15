#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, a, lista[10000], cont, maior;
    while (true){
        cin >> a >> c; if(c == 0 && a == 0) break;
        cont = 0, maior = 0;
        cin >> lista[0];
        for(int i=1; i < c; i++){
            cin >> lista[i];
            if(lista[i] > lista[i - 1]) cont += lista[i] - lista[i - 1];
            if(lista[i] > maior) maior = lista[i];
        }
        if(maior < a) cont += a - maior;
        if(maior != lista[c - 1]) cont += maior - lista[c - 1];
        cout << cont << endl;
    }
}