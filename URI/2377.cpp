#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, d, k, p, sum = 0, cont = 0, xcont = 0;
    cin >> l >> d >> k >> p;
    while(cont + d <= l){
        xcont += 1;
        cont += d;
    }
    sum += l * k; sum += xcont * p;
    cout << sum << endl;

}