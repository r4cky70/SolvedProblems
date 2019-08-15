#include <bits/stdc++.h>
using namespace std;


bool para(int a, int b) {
    return (a > b);
}

int main(){
    int n, keep, x, cont = 0;
    cin >> n;
    vector <int> lista(n);
    for(int i=0; i < n; i++){
        cin >> lista[i];
    }
    for(int i=lista.size() - 1; i > -1; i--){
        if(lista[i] % 2 == 1){
            lista.push_back(lista[i]);
            lista.erase(lista.begin() + i);
            cont += 1;
        }
    }
    sort(lista.begin(), lista.end() - cont);
    sort(lista.end() - cont, lista.end(), para);
    for(int i=0; i < lista.size(); i++){
        cout << lista[i] << endl;
    }
}