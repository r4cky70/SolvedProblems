#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, baralho[52]; string temp; vector <int> pess;
    while(cin >> n, n != 0){
        vector <string> lista;
        for(int i=0; i < n; i++){
            cin >> temp; lista.push_back(temp);
        }
        for(int i=0; i < 52; i++){
            cin >> baralho[i];
        } int cont = 0, menor;
        while(cont + lista.size() < 52 && lista.size() > 1){
            menor = 14;
            for(int j = cont; j < cont + lista.size(); j++){
                if(baralho[j] < menor){
                    pess.clear();
                    menor = baralho[j];
                    pess.push_back(j - cont);
                }
                else if(baralho[j] == menor){
                    pess.push_back(j - cont);
                }
            }
            cont += lista.size();
            if(pess.size() == lista.size()) break;
            for(int j=pess.size() - 1; j > -1; j--){
                lista.erase(lista.begin() + pess[j]);
            }
        }
        // for(int i=0; i < lista.size(); i++){
        //     if(i == lista.size() - 1) cout << lista[i] << endl;
        //     else cout << lista[i] << ' ';
        // }
        for(int i=0; i < lista.size(); i++){
            cout << lista[i] << ' ';
        }
        cout << endl;
    }
}