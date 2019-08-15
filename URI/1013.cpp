#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, x, m;
    scanf("%d %d %d", &a, &b, &c);
    x = (a + b + abs(a - b)) / 2;
    m = (x + c + abs(x - c)) / 2;
    printf("%d eh o maior\n", m);
    return 0;
}