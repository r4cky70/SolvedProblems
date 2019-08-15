#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int lista[], int max){
    int keep;
    for (int i=0; i < max - 1; i++){
        for (int j=i; j < max - 1; j++){
            if (lista[j] > lista[j + 1])
            keep = lista[j];
            lista[j] = lista[j + 1];
            lista[j + 1] = keep;
        }
    }
}


int main(){
    int n, nc = 0;
    while (n != 0){
        nc += 1;
        cin >> n;
        int nmoradores[n], ctot[n], cmed[n], nctot = 0;
        float cmedt, nmorad = 0;
        for (int i = 0; i < n; i++){
            cin >> nmoradores[i] >> ctot[i];
            cmed[i] = ctot[i] / nmoradores[i];
            nmorad += nmoradores[i];
            nctot += ctot[i];
        }
        cmedt = nctot / nmorad;
        cout << endl << nctot << " " << nmorad << endl;
        cout << fixed << setprecision(2) << cmedt << endl;

        bubbleSort(cmed, n);
        for (int i=0; i < n; i++){
            cout << cmed[i] << endl;
        }
    }
    return 0;
}