#include <bits/stdc++.h>
using namespace std;

int space(string s){
    int cont = 1;
    for(int i=0; i < s.size(); i++){
        if(s[i] == ' ') cont += 1;
    }
    return cont;
}


int main(){
    int n, cont, contt= 0; double f, tot; string s;
    cin >> n;
    for(int i=0; i< n; i++){
        cont = 0;
        cin >> f;
        cin.ignore();
        getline(cin, s);
        cont += space(s); contt += cont;
        tot += f;
        cout << "day " << i + 1 << ": " << cont << " kg\n";
    }
    printf("%.2f kg by day\nR$ %.2f by day\n", (double)contt / n, tot / n);
}