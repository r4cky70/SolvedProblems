#include <bits/stdc++.h>
using namespace std;


int main(){
    int temp; string s, x, y;
    while(true){        
        cin >> x >> y; if(x.size() == 1 && y.size() == 1 && (stoi(x) == 0 && stoi(y) == 0)) break;
        while(x.size() != 1){
            temp = 0;
            for(int i=0; i < x.size(); i++){
                temp += x[i] - '0';
            }
            x = to_string(temp);
        }while(y.size() != 1){
            temp = 0;
            for(int i= 0; i < y.size(); i++){
                temp += y[i] - '0';
            }
            y = to_string(temp);
        }if(stoi(x) > stoi(y)) printf("1\n");
        else if(stoi(x) < stoi(y)) printf("2\n");
        else printf("0\n");
    }
}