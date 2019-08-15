#include <bits/stdc++.h>
using namespace std;

int main(){
    int r; double vol, pi;
    pi = 3.14159;
    scanf("%d", &r);
    vol = 4.0 / 3 * pi * pow(r, 3);
    printf("VOLUME = %.3f\n", vol);
    return 0;
}