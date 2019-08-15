#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cont; string name, x;
    scanf("%d\n", &n);
    for (int i=0; i < n; i++){
        getline(cin, name);
        if (name.size() == 3){
            x = "one";
            cont = 0;
            for (int j=0; j < name.size(); j++){
                if(name[j] == x[j]){
                    cont += 1;
                }
            }
            if (cont >= 2) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else cout << 3 << endl;
        }
    return 0;
    }