#include <bits/stdc++.h>
using namespace std;

unsigned long long expo(int a, int b){
    int result = 1;

    while (b>0){
        result *= a;
        b--;
    }

    return result;
}



int main(){
    int n;
    scanf("%d", &n);
    cout << expo(3, n) << endl;
}