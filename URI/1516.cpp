#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b;vector <string> s;string temp;
    while(scanf("%d %d", &n, &m), n != 0 && m != 0){
        s.clear();
        for(int i=0; i < n; i++){
            cin >> temp; s.push_back(temp);
        }
        scanf("%d %d", &a, &b);
        for(int i=0; i < n; i++){ // olha a linha que deve ver;
            for(int j=0; j < a / n; j++){ // olha quantas vezes repetir cada linha;
                for(int k=0; k < s[i].size(); k++){
                    for(int l=0; l < b / m; l++){
                        cout << s[i][k];
                    }
                }
                cout << endl;
            }
        }
        cout << endl;
    }
}

// 3 5
// ..|..
// ..|..
// .0-0.

// 4 6
// ../\..
// ..||..
// ..||..
// .O##O.