#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, a, b, ga, gb; char c;
    scanf("%d", &n);
    while(n--){
        a = 0; b = 0; ga = 0; gb = 0;
        scanf("%d %c %d", &x, &c, &y);
        gb += y;
        if(x > y) a += 3;
        else if(x == y) {b+= 1, a ++;}
        else b+=3;
        scanf("%d %c %d", &x, &c, &y);
        ga += y;
        if(x > y) b += 3;
        else if(x == y) {b+= 1, a ++;}
        else a+=3;
        if(a > b) printf("Time 1\n");
        else if(a < b) printf("Time 2\n");
        else{
            if(ga > gb) printf("Time 1\n");
            else if(ga < gb) printf("Time 2\n");
            else printf("Penaltis\n");
        }
    }
}