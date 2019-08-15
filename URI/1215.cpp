#include <bits/stdc++.h>
using namespace std;


int main(){
    set<string>fon;
    string s, temp;int x;
    while(cin >> s){
        temp = "";
        for(int i=0; i < s.size(); i++){
            x = (int)s[i];
            if(x >= 65 && x <= 90){
                temp += (char)(x + 32);
            }else if(x >= 97 && x <= 122) temp += (char)x;
            else{
                if(temp.size() > 0) {fon.insert(temp); temp = "";}
            }
        }
        if(temp.size() > 0) {fon.insert(temp); temp = "";}
    }
    for(set<string>::iterator it = fon.begin(); it != fon.end(); it++) cout << (*it) << endl;
}