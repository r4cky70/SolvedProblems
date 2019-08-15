#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;string s; set <char> fon;
    scanf("%d", &n);
    for(int i=0; i < n; i++){
        cin.ignore(); getline(cin, s); fon.clear();
        for(int j=0; j < s.size(); j++){
            if((int)s[j] < 123 && (int)s[j] > 96) fon.insert(s[j]);
        }
        if(fon.size() == 26) printf("frase completa\n");
        else if(fon.size() >= 13) printf("frase quase completa\n");
        else printf("frase mal elaborada\n");
    }
}