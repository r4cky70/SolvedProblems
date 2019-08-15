#include <bits/stdc++.h>
using namespace std;

int main(){
    int cont, n, t;string s;
    cin >> n;
    string lista = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0; i<n; i++){
        cin >> t;
        cin >> s;
        cont = 0;
        for(int j=0; j < t; j++){
            if (lista[j] != s[j]) cont += 1;
        }
        if(cont <= 2) printf("There are the chance.\n");
        else printf("There aren't the chance.\n");
   }
   return 0;
}