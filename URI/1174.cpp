#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;float y;
    for(int i=0; i <=100; i++){
        cin >> y;
        if(y <= 10){
            cout << fixed << setprecision(1);
            cout << "A[" << i << "] = " << y << endl;
        }
    }
    return 0;
}