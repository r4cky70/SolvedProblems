#include <bits/stdc++.h>
using namespace std;

int fon(int x, int y){
    int cont;
    if(x == y){
        string tob = to_string(x);
        for(int i=0; i < tob.size(); i++){
            cont = 0;
            for(int j=0; j<tob.size(); j++){
                if(tob[i] == tob[j]) {cont += 1; if (cont >= 2) return 0;}
            }
        }
        return 1;
    }string s, b;bool temp;int xcont = 0;
    for(int k=x; k <= y; k++){
        s = to_string(k);
        temp = true;
        for(int i=0; i < s.size(); i++){
            cont = 0;
            for(int j=0; j<s.size(); j++){
                if(s[i] == s[j]){
                    cont += 1;
                    if(cont >= 2){
                        temp = false;
                        break;
                    }
                }
                if(temp == false) break;
            }
        }
        if(temp == true) xcont += 1;
    }
    return xcont;
}

int main(){
    int x, y;
    while(cin >> x >> y){
        printf("%d\n", fon(x, y));
    }
}