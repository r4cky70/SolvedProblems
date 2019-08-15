#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    while (true){
        cin >> n;
        if(n == 0) break;
        int cont = 0;
        for(int i=0; i < n; i++){
            cin >> x >> y;
            cont += y / 2;
        }
        cout << cont / 2 << endl;
    }
}