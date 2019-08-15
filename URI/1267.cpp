#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, t; bool fon, kek;
    while(scanf("%d %d", &n, &d), n != 0 && d != 0){
        fon = false;
        for(int i=0; i < n; i++){
            kek = true;
            for(int j=0; j < d; j++){
                scanf("%d", &t); if(t == 0) kek = false;
            }
            if(kek == true) fon = true;
        }
        if(fon == true) printf("yes\n");
        else printf("no\n");
    }
}