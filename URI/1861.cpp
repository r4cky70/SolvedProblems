#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, b;map <string, int> dic;
    while(cin >> s >> b){
        if(dic[s] != 0){
            if(dic[s] != -1) dic[s] += 1;
            dic[b] = -1;
        }
        else{
            dic[s] = 1;
            dic[b] = -1;
        }
    }
    cout << "HALL OF MURDERERS\n";
    for(map<string, int>::iterator it = dic.begin(); it != dic.end(); it++){
        if((*it).second != -1) cout << (*it).first << " " << (*it).second << endl;
    }
}