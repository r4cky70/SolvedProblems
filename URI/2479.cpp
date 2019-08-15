#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cont = 0;string s, lista[100]; char c;
    scanf("%d", &n);
    for(int i=0; i < n; i++){
        cin >> c >> lista[i];
        if(c == '+'){
            cont++;
        }
    }sort(lista, lista + n);
    for(int i=0; i < n; i++){
        cout << lista[i] << endl;
    }printf("Se comportaram: %d | Nao se comportaram: %d\n", cont, n - cont);
}