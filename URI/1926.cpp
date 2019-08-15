#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, cont;vector <int> lista;bool fon;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> x >> y; lista.clear();cont =0;
        if(x == 1) x = 3;
        if(x % 2 == 0) x += 1;
        for(int j=x; j <= y; j += 2){
            fon = true;        
            for(int k=2; k <= (int)sqrt(j);k++){
                if(j % k == 0) {fon = false; break;}
            }
            if(fon == true) lista.push_back(j);
        }
        for(int j=1; j < lista.size(); j++){
            if(abs(lista[j] - lista[j - 1]) == 2) cont += 1;
        }cout << lista.size() << " ";
        cout << cont << endl;
    }
}