#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; bool flag, aux;
    while(getline(cin, s)){
        cin.ignore();
        flag = true; aux = false;
        if(s.size() >= 6 && s.size() <= 32){
            for(int i=0; i<s.size(); i++){
                if((int)s[i] >= 65 && (int)s[i] <= 90) aux = true;
                if(((int)s[i] >= 32 && (int)s[i] <= 47) || ((int)s[i] >= 58 && (int)s[i] <= 64) || ((int)s[i] >= 91 && (int)s[i] <= 96) || (int)s[i] >= 123){
                    flag = false; break;
                }
            }
        }else flag = false;
        if(aux == false) flag = false;
        if(flag == true) printf("Senha valida.\n");
        else printf("Senha invalida.\n");


    }
}