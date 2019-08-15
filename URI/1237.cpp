#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;int cont, temp, k;
    while(getline(cin, str1)){
        cin.ignore(); getline(cin, str2); cin.ignore();
        cont = 0; temp = 0;
        for(int i=0; i < str1.size(); i++){
            for(int j=0; j < str2.size(); j++){
                if(str1[i] == str2[j]){
                    k = i; temp = 0;
                    for(int m=j; m < str2.size(); j++){
                        if(str1[k] == str2[m]) temp += 1;
                        else break;
                        k++;
                    }
                    if(temp > cont) cont = temp;
                }
            }
        }
        printf("%d\n", cont);
    }
}