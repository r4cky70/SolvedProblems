#include <bits/stdc++.h>
using namespace std;



int main(){
    int cont, n, t, tiros[50];string s;
    scanf("%d", &n);
    for(int i=0; i < n; i++){
        scanf("%d", &t);
        for(int j=0; j < t; j++){
            scanf("%d", &tiros[j]);
        }
        cin.ignore(); cin >> s; cont = 0;
        for(int j=0; j < t; j++){
            if(s[j] == 'J' && tiros[j] >= 3) cont += 1;
            else if(s[j] == 'S' && tiros[j] < 3) cont ++;
        }
        printf("%d\n", cont);
    }
}