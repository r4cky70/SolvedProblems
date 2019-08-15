#include <bits/stdc++.h>
using namespace std;

int space(int n){
    unsigned long long cont = 1;
    for(int i=2; i < n * 2; i += 2){
        cont *= 4;
    }
    return (to_string(cont)).size();
}

int chon(int n){return (to_string(n).size());}

int main(){
    int n, aux = 0;
    while(true){
        int cont = 1;
        cin >> n; if(n == 0) break;
        for(int i=0; i < n; i++){
            cont = pow(2, i);
            for(int k=0; k < space(n) - chon(cont); k++){
                cout << " ";
            }
            cout << cont;
            for(int j=1;j<n;j++){
                cout << " ";
                cont *= 2;
                for(int k=0; k < space(n) - chon(cont); k++){
                    cout << " ";
                }
                cout << cont;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}