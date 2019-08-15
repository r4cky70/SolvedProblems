#include <stdio.h>
using namespace std;

int main(){
    setvbuf(stdout, NULL, _IOFBF, 10e9);
    int n, x;
    scanf("%d", &n);
    for(int i=0; i < n; ++i){
        scanf("%d", &x);
        int y = x % 4;
        switch(y){
            case 0: printf("1\n"); break;
            case 1: printf("7\n"); break;
            case 2: printf("9\n"); break;
            case 3: printf("3\n"); break;
        }
    }
}