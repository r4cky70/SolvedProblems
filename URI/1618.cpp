#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a1, a2, b1, b2, c1, c2, d1, d2, x, y;
    scanf("%d", &n);
    for(int i=0; i < n; i++){
        scanf("%d %d %d %d %d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2, &d1, &d2, &x, &y);
        if(x >= a1 && x <= b1 && y <= d2 && y >= a2) printf("1\n");
        else printf("0\n");
    }
}