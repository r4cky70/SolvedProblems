#include <bits/stdc++.h>
using namespace std;

int main(){
    int vetor[1000], n;
    cin >> n;
    for (int i=0; i < 1000; i++){
        vetor[i] = i % n;
        cout << "N[" << i << "] = "<< vetor[i] << endl;    
    }
    return 0;
}