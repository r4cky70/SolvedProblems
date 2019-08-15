#include <bits/stdc++.h>
using namespace std;

int whoplay('')


int main(){
    int p, s, t1, t2, t3, n, d1, d2, cont;
    while (true){
        cin >> p >> s; if(p == 0 && s ==0)break;
        map <int,int> dic; cont = 0;
        for(int i=0; i < p; i++) dic[i] = 0;
        cin >> t1 >> t2 >> t3;
        cin >> n;
        for(int i=0; i < n; i++){
            cin >> d1 >>d2;
            dic[cont % p] += d1 + d2;
            if(dic[cont % p] > s){
                cout << (cont % p) + 1 << endl;
            }
            if(dic[cont % p] == t1 || dic[cont % p] == t2 || dic[cont % p] == t3) cont += 1;
            cont += 1;
        }
    }
}