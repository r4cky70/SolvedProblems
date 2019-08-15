#include <bits/stdc++.h>
using namespace std;

int m;

bool myfunction(long i, long j){
    if(i % m > j % m) return false;
    else if(i % m < j % m) return true;
    else{
        if(abs(i % 2) == 1 && j % 2 == 0) return true;
        if(i % 2 == 0 && abs(j % 2) == 1) return false;
        if(i % 2 == 0 && j % 2 == 0) return (i < j);
        if(abs(i % 2) == 1 && abs(j % 2) == 1) return (i > j);
    }
}

int main(){
    int n;long lista[10000];
    while(cin >> n >> m){
        for(int i=0; i < n; i++){
            cin >> lista[i];
        }
        sort(lista, lista + n, myfunction);
        cout << n << " " << m << endl;
        for(int i=0; i < n; i++){
            cout << lista[i] << endl;
        }
    }
}