#include <bits/stdc++.h>
using namespace std;

unsigned long long fastExp(int base, int expo){
    if(expo == 0) return 1;

    if(expo%2 == 0){
        unsigned long long x = fastExp(base, expo/2);
        return x*x;
    }else return fastExp(base, expo-1)*base;
}

int main(){
    int n, c; unsigned long long sum;
    cin >> n;
    for (int i=0; i < n; i++){
        cin >> c;
        sum = 0;
        if(c == 64){
            cout << "1537228672809129 kg\n";
        }
        else{
            for (int j=0; j < c; j++){
                sum += fastExp(2, j);
            }
            cout << sum / 12000 << " kg" << endl;
        }
    }
    return 0;
}