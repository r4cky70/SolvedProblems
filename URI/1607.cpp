#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;string s, b;
    cin >> n;
    for(int i=0; i < n; i++){
        int sum =0;
        cin >> s >> b;
        for(int j=0; j < s.size(); j++){
            if((int)s[j] <= (int)b[j])sum += (int)b[j] - (int)s[j];
            else sum += (int)b[j] - 97 + 123 - (int)s[j];
        }
        cout << sum << endl;
    }
}