#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0; i < 11; i++){
        cout << "N[" << i << "] = " << n * pow(2, i) << endl;
    }
    return 0;
}
