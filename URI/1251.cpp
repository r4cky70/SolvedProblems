#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;unordered_map <char, int> dic;
    while(getline(cin, s), cin && !cin.eof()){
        cin.ignore();
        for(int i=0; i < s.size(); i++){
            if(dic.count(s[i])){
                dic[s[i]] += 1;
            }
            else dic[s[i]] = 1;
        }
        for(unordered_map <char, int> :: iterator it = dic.begin(); it != dic.end(); it++){
            printf("%d %d\n", (int)(*it).first, (*it).second);
        }dic.clear();
    }
}