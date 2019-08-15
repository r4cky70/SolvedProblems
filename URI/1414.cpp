#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, x, cont, tot;map <string, int> dic;string s;
    while(scanf("%d %d", &n, &t), n != 0){
        tot = 0;
        for(int i=0; i < n; i++){
            cin.ignore(); cin >> s >> x; tot += x;cont += x % 3;
        } cont = 0;
        while(true){
            if(tot - cont == (t - (cont / 2)) * 3) break;
            cont += 6;
        }
        printf("%d\n", cont / 2);
    }
}