#include <bits/stdc++.h>
using namespace std;

int main(){
    float x;
    cin >> x;
    if (x > 100 || x < 0){
        cout << "Fora de intervalo\n";
    }
    else if (x > 75){
        cout << "Intervalo (75,100]\n";
    }
    else if (x > 50){
        cout << "Intervalo (50,75]\n";
    }
    else if (x > 25){
        cout << "Intervalo (25,50]\n";
    }
    else{
        cout << "Intervalo [0,25]\n";
    }
    return 0;
}