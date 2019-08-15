#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, lista[10002], keep, cont = 0;
    while(cin >> n, n != 0){
        cont += 1;
        for(int i=1; i < n + 1; i++){
            cin >> lista[i];
            if(lista[i] == i) keep = i;
        }
        cout << "Teste " << cont << endl << keep << endl << endl;
    }
}