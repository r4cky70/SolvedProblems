#include <bits/stdc++.h>
using namespace std;

int hp(int iv, int basehp, int ev, int l){
    int hp;
    hp = ((iv + basehp + sqrt(ev) / 8 + 50) * l) / 50 + 10;
    return hp;
}

int sta(int iv, int basesta, int ev, int l){
    int sta = ((iv + basesta + sqrt(ev) / 8) * l) / 50 + 5;
    return sta;
}


int main(){
    int n, l, iv, bs, ev; string s;
    cin >> n;
    for(int i=0; i< n; i++){
        cin >> s >> l;
        cout << "Caso #" << i + 1 << ": " << s << " nivel " << l << endl;
        cin >> bs >> iv >> ev;
        cout << "HP: " << hp(iv, bs, ev, l) << endl;
        cin >> bs >> iv >> ev;
        cout << "AT: " << sta(iv, bs, ev, l) << endl;
        cin >> bs >> iv >> ev;
        cout << "DF: " << sta(iv, bs, ev, l) << endl;
        cin >> bs >> iv >> ev;
        cout << "SP: " << sta(iv, bs, ev, l) << endl;
    }
}