#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, x, y, z, keep;
    cin >> x >> y >> z;
    if (x > y){
        a = x;
        b = y;
    }
    else{
        b = x;
        a = y;
    }
    if (z > a){
        c = b;
        b = a;
        a = z;
    }
    else {
        if (z > b){
            c = b;
            b = z;
        }
        else{
            c = z;
        }
    }
    if (a >= b + c){
        cout << "NAO FORMA TRIANGULO\n";
    }
    else{
        if (a * a < b * b + c * c){
        cout << "TRIANGULO ACUTANGULO\n";
        }
        if (a * a == b * b + c * c){
            cout << "TRIANGULO RETANGULO\n";
        }
        if (a * a > b * b + c * c){
            cout << "TRIANGULO OBTUSANGULO\n";
        }
        if (a == b && b == c){
            cout << "TRIANGULO EQUILATERO\n";
        }
        else if (a == b || b == c || c == a){
            cout << "TRIANGULO ISOSCELES\n";
        }
    }
    return 0;
}