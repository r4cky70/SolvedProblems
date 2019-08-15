#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, res;string s;
    scanf("%d", &n);
    for (int i=0; i < n; i++){
        cin >> s;
        for(int i=0; i < 3; i++){
            if(s[0] == s[2]) res = (s[0] - '0') * (s[2] - '0');
            else if((int)s[1] > 64 && (int)s[1] < 91) res = (s[2] - '0')-(s[0] - '0');
            else res = s[0] - '0' + s[2] - '0';
        }
        printf("%d\n", res);
    }
}