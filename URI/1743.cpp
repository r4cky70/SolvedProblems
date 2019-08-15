#include <bits/stdc++.h>
using namespace std;

int main(){
    int x[5], y[5];
    for(int j=0; j < 5; j++) scanf("%d", &x[j]);
    for(int j=0; j < 5; j++) scanf("%d", &y[j]);
    bool flag = true;
    for(int j=0; j < 5; j++){
        if(x[j] == y[j]){
            flag = false;
            break;
        }
    }if(flag == true) printf("Y\n");
    else printf("N\n");
}
