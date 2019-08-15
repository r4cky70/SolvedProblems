#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; int d, cont = 0; double sum = 0;
    while(getline(cin, s)){
        cin >> d; sum += d;
        cont += 1;
        cin.ignore();
    }
    printf("%.1f\n", sum / cont);
}