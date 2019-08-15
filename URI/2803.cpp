#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; bool fon = false;
    string lista[7]; lista[0] = "para"; lista[1] = "roraima"; lista[2] = "acre"; lista[3] = "amapa"; lista[4] = "amazonas"; lista[5] = "rondonia"; lista[6] = "tocantins";
    cin.ignore();
    getline(cin, s);
    for(int i=0; i < 7; i++){
        if(s == lista[i]){
            fon = true;
            break;
        }
    }
    if(fon == true) cout << "Regiao Norte" << endl;
    else cout << "Outra regiao" << endl;
    return 0;
}