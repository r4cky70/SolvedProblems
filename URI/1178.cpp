#include <bits/stdc++.h>
using namespace std;

int main(){
    int vetor[100];
    double tr, n;
    cin >> n;
    cout << fixed << setprecision(4);
    for (int i=0; i < 100; i++){
        tr = n / pow(2, i);
        cout << "N[" << i << "] = " << tr << endl;
    }
    return 0;
}