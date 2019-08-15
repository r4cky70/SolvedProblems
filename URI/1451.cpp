#include <bits/stdc++.h>
using namespace std;

int main(){
    list <string> tock; string s, temp, res;
    while(cin >> s){
        temp = "", res = ""; int cont = 0;bool token = true;tock=list<string>();
        while(cont < s.size()){
            if(s[cont] == '['){token = true;cont += 1;break;}
            else if(s[cont] == ']'){token = false;cont += 1;break;}
            res += s[cont];
            cont += 1;
        }
        tock.push_back(res);
        for(int i=cont; i < s.size(); i++){
            if(s[i] == '['){
                if(token == true) {tock.push_front(temp);temp = "";}
                else if(token == false) {tock.push_back(temp);temp = "";}
                token = true;
            }
            else if(s[i] == ']'){
                if(token == true) {tock.push_front(temp);temp = "";}
                else if(token == false) {tock.push_back(temp);temp = "";}
                token = false;
            }
            else temp += s[i];
        }
        if(token == true) tock.push_front(temp);
        else if(token == false) tock.push_back(temp);
        for(list<string>::iterator it = tock.begin(); it != tock.end(); it++) cout << *it;
        cout << endl;
    }
}
