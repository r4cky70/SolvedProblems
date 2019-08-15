#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, px, py, x, y;
    while(true){
        cin >> n; if(n == 0) break;
        cin >> px >> py;
        for(int i=0; i < n; i++){
            cin >> x >> y;
            if(x == px || y == py) cout << "divisa" << endl;
            else if(x > px && y > py) cout << "NE" << endl;
            else if(x > px && y < py) cout << "SE" << endl;
            else if(x < px && y > py) cout << "NO" << endl;
            else cout << "SO" << endl;
        }
    }
    return 0;
}