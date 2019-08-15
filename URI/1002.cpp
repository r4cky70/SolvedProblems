#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
    double pi, r, area;
    pi = 3.14159;
    cin >> r;
    area = pi * pow(r, 2);
    printf("A=%.4f\n", area);
    return 0;
}