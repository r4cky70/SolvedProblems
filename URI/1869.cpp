#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n; string s;
    while(scanf("%llu", &n), n != 0){
        s = "";
        while(n > 32){
            if(n % 32 < 10) s += to_string(n % 32);
            else{
                s += (char)((n % 32) + 55);
            }
            n = n / 32;
        }
        for(int i=s.size() - 1; i > -1; i--){
            printf("%c", s[i]);
        }
        printf("\n");
    }
}