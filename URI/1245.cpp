#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, e[31],d[31]; char s;
    while(cin >> n){
        for(int i=0; i < 31; i++){e[i] = 0; d[i] = 0;}
        for(int i=0;i<n; i++){
            cin >> x >> s;
            if(s == 'D') d[x - 30] += 1;
            else e[x - 30] += 1;
        }
        int cont = 0;
        for(int i=0;i<31;i++){
            if(d[i] > 0 && e[i] > 0){
                if(d[i] >= e[i])cont += d[i] - abs(d[i] - e[i]);
                else cont += e[i] - abs(d[i] - e[i]);}
        }
        cout << cont << endl;
    }
}