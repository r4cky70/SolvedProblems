#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, menor, keep;
    cin >> n;
    vector < int > vetor(n);
    menor = 10e7, keep = 0;
    for(int i=0; i < n; i++){
        cin >> vetor[i];
        if (vetor[i] < menor){
            menor = vetor[i];
            keep = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, keep);
    return 0;
}