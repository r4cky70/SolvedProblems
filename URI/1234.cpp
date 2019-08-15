#include <bits/stdc++.h>
using namespace std;

bool in(char cha, string stre){
    for(int i=0; i < stre.size(); i++){
        if(cha == stre[i]){
            return true;
        }
    }
    return false;
}
int main(){
    string a; int cont;
    while(getline(cin, a)){
        cont = 0;
        for (int i=0; i < a.size(); i++){
            if(in(a[i], "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == true){
                cont += 1;
            }
            if (cont % 2 == 1){
                a[i] = toupper(a[i]);
            }
            else a[i] = tolower(a[i]);
        }   
    cout << a << endl;
    }
    return 0;
}