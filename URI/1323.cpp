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
    int n;
    while(true){
        unsigned long long sum = 0;
        cin >> n;
        if(n == 0) break;
        else{
            for (int i=1; i <= n; i++){
                sum += fastExp(i, 2);
            }
            cout << sum << endl;
        }
    }
    return 0;
}