#include <bits/stdc++.h>
using namespace std;

int main(){
    int vetor[20];
    for (int i=0; i < 20; i++){
        cin >> vetor[i];
    }
    for (int i=19; i > -1; i--){
        cout << "N[" << 19 - i << "] = " << vetor[i] << endl;
    }
    return 0;
}