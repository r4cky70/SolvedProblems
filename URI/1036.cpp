#include <bits/stdc++.h>
using namespace std;

int main(){double a, b, c, delta, r1, r2;cout << fixed << setprecision(5);cin >> a >> b >> c;delta = (b * b) - (4 * a * c);r1 = (-b + sqrt(delta)) / (2 * a);r2 = (-b - sqrt(delta)) / (2 * a);if (a != 0 && delta > 0){cout << "R1 = " << r1 << "\nR2 = " << r2 << endl;}else {cout << "Impossivel calcular\n";}return 0;}