#include <bits/stdc++.h>
using namespace std;

vector <string> split(string s){
    string temp = ""; vector <string> lista;
    for(int i=0; i < s.size(); i++){
        if(s[i] != ' ') temp += s[i];
        else{
            if(temp.size() > 0){
                lista.push_back(temp);
                temp = "";
                }
        }
    }
    if(temp.size() > 0) lista.push_back(temp);
    return lista;
}

vector<string> bubblesort(vector<string> lista){
    int cont = 0;string temp;
    for(int i=0; i < lista.size(); i++){
        for(int j=1; j < lista.size() - cont; j++){
            if(lista[j].size() > lista[j - 1].size()){
                temp = lista[j - 1];
                lista[j - 1] = lista[j];
                lista[j] = temp;
            }
        }
        cont += 1;
    }
    return lista;
}


int main(){
    int n;string s;vector <string> lista;
    cin >> n;
    for(int k=0; k < n + 1; k++){
        getline(cin, s);
        cin.ignore();
        lista = bubblesort(split(s));
        for(int i=0; i < lista.size(); i++){
            if(i != lista.size() -1) cout << lista[i] << " ";
            else cout << lista[i] << endl;
        }
        lista.clear();
    }
}