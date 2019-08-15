#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    double a, b, med;
    cin >> a >> b;
    med = (a * 0.35 + (b * 0.75)) / 1.1;
    printf("MEDIA = %.5lf\n", med);
    return 0;
}