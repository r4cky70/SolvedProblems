#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; string x;
    scanf("%d\n", &n);
    for(int i=0; i < n; i++){
        string temp;
        getline(cin, x);
        for(int j=x.size() / 2 - 1; j > -1; j--){
            temp += x[j];
        }
        for(int j=x.size() - 1; j > x.size() / 2 - 1; j--){
            temp += x[j];
        }
        cout << temp << endl;
    }
}