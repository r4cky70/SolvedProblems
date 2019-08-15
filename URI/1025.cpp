#include <bits/stdc++.h>
using namespace std;

int bsearch(int *lista, int start, int end, int x){
    int valor = (start + end) / 2;
    if(lista[valor] == x){
        for(int i=valor; i >= start; i--){
            if(lista[i] != x) return i + 1;
        }
        return start;
    }
    if(start >= end) return -1;
    else if(lista[valor] > x) return bsearch(lista, start, valor - 1, x);
    else return bsearch(lista, valor + 1, end, x);
}
int main(){
    int n, q, x, casos = 0, fon, marb[1000000];
    while (true){
        cin >> n >> q;
        if(n == 0 && q == 0) break;
        casos += 1;
        cout << "CASE# " << casos << ":" << endl;
        
        for(int i=0; i < n; i++){
            cin >> marb[i];
        }
        sort(marb, marb + n);
        for(int i=0; i < q; i++){
            cin >> x;
            fon = bsearch(marb, 0, n, x) + 1;
            if(fon == 0) cout << x << " not found\n";
            else cout << x << " found at "  << fon << endl;
        }
    }
}