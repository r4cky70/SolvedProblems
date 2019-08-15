#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector <int> lista = {1, 3, 5, 10, 25, 50, 100};
    cin >> n;
    for(int i=0; i < 7; i++){
        if(lista[i] >= n){
            cout << "Top " << lista[i] << endl;
            return 0;
        }
    }
    cout << "Top " << 100 << endl;
    return 0;
}