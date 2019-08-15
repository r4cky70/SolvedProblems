#include <bits/stdc++.h>
using namespace std;

bool condtri(int a, int b, int c){
    if(a * a == b * b + c * c){
        return true;
    }
    else return false;
}


int main(){
    vector <int> lista(3);
    int a, b, c;
    cin >> lista[0] >> lista[1] >> lista[2];
    sort(lista.begin(), lista.end());
    a = lista[2]; b = lista[1]; c = lista[0];
    if(a >= b + c) cout << "Invalido\n";
    else if(a == b && b == c) cout << "Valido-Equilatero\nRetangulo: N\n";
    else if(a == b && c != b || a == c && b != a || b == c && a != c){
        cout << "Valido-Isoceles\n";
        if(condtri(a, b, c) == true) cout << "Retangulo: S\n";
        else cout << "Retangulo: N\n";
    }
    else{
        cout << "Valido-Escaleno\n";
        if(condtri(a, b, c) == true) cout << "Retangulo: S\n";
        else cout << "Retangulo: N\n";
    }
}