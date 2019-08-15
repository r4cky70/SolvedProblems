#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k,x; map <int, string> dic = {{1, "Rolien"}, {2, "Naej"}, {3, "Elehcim"}, {4, "Odranoel"}};
    scanf("%d", &n);
    while(n--){
        scanf("%d", &k);
        while(k--){
            scanf("%d", &x);
            cout << dic[x] << endl;
        }
    }
}