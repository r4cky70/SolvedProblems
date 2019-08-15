#include <bits/stdc++.h>
using namespace std;

vector <string> split(string s){
    string temp = ""; vector <string> lista;
    for(int i=0; i < s.size(); i++){
        if(s[i] == ' '){
            lista.push_back(temp);
            temp = "";
        }
        else{
            temp += s[i];
        }
    }
    lista.push_back(temp);
    return lista;
}


int main(){
    int n, cont, casos = 0; string s;
    while(cin >> n){
        cont = 0; casos += 1; if(casos > 1) cout << endl;
        cin.ignore();
        getline(cin, s);
        vector <string> lista = split(s);
        int fem = 0, mas = 0;
        for(int i=0; i < lista.size(); i += 2){
            if(lista[i] == to_string(n)) cont += 1;
            if(lista[i + 1] == "F"){
                if(lista[i] == to_string(n)) fem += 1;
            }
            else{
                if(lista[i] == to_string(n)) mas += 1;
            }
        }
        cout << "Caso " << casos <<":\nPares Iguais: " << cont << "\nF: " << fem << "\nM: " << mas << endl;
    }
}