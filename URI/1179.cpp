#include <bits/stdc++.h>
using namespace std;

int main(){
    int contp = 0, conti = 0;
    int vetorp[5], vetori[5];
    for(int i=0; i < 15; i++){
        int n; cin >> n;
        if(contp == 5){
             contp = 0;
             for(int j=0; j < 5; j++){
                 cout << "par[" << j << "] = " << vetorp[j] << endl;
            }
        }
        if(conti == 5){
            conti = 0;
            for(int k=0; k < 5; k++){
                 cout << "impar[" << k << "] = " << vetori[k] << endl;
            }
        }
        if(n % 2 == 0){
            vetorp[contp] = n;
            contp += 1;
        }
        else{
            vetori[conti] = n;
            conti += 1;
        }
    }
    for(int k=0; k < conti; k++){
        cout << "impar[" << k << "] = " << vetori[k] << endl;
    }
    for(int j=0; j < contp; j++){
        cout << "par[" << j << "] = " << vetorp[j] << endl;
    }
}