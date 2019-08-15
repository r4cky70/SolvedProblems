#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0; i < n; i++){
        double c; int cont = 0;
        cin >> c;
        while (c > 1){
            c /= 2;
            cont += 1;
        }
        cout << cont << " dias" << endl;
    }
    return 0;
}