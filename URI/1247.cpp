#include <bits/stdc++.h>
using namespace std;

float tempo(int s, int v){
    return (float)s / v;
}

int main(){
    int d, vf, vg;
    while(scanf("%d %d %d", &d, &vf, &vg) == 3){
        if(vf > vg) printf("N\n");
        else{
            if(tempo(sqrt(12 * 12 + d * d), vg) <= tempo(12, vf)) printf("S\n");
            else printf("N\n");
        }
    }
}