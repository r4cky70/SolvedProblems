#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, mai, cont = 0;
    string s[50], temp;
    while(scanf("%d", &n), n != 0){
        mai = 0;if(cont > 0) cout << endl;cont += 1;
        for(int i=0; i < n; i++){
            cin >> s[i];
            if(mai < s[i].size()) mai = s[i].size();
        }
        for(int i=0; i < n; i++){
            temp = "";
            for(int j=0; j < mai - s[i].size(); j++) temp += ' ';
            temp += s[i];
            cout << temp << endl;
        }
    }
}