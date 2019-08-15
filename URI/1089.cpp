#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, lista[10000]; bool fon;
    while(true){
        int cont = 0;
        cin >> n;
        if(n == 0) break;
        cin >> lista[0] >> lista[1];
        if(lista[0] < lista[1]){
            cont += 1;
            fon = true;
        }else{
            cont += 1;
            fon = false;
        }
        for(int i=2; i < n; i++){
            cin >> lista[i];
            if(lista[i - 1] < lista[i] && fon == false){
                fon = true;
                cont += 1;
            }else if(lista[i - 1] > lista[i] && fon == true){
                fon = false;
                cont += 1;
            }
        }
        if(lista[n - 1] > lista[n - 2] && lista[0] < lista[n - 1] && lista[0] < lista[1]|| lista[n - 1] < lista[n - 2] && lista[0] > lista[n - 1] && lista[0] > lista[1]) cont += 1;
        cout << cont << endl;
    }
}