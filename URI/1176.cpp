#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    vector <long> fib;
    fib.push_back(0); fib.push_back(1);
    for(int i=2; i <= 60; i++){
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }
    return 0;
}