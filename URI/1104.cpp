#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, temp;set <int> alice; set <int> beatrice;
    while(scanf("%d %d", &x, &y), x != 0 && y != 0){
        alice.clear(); beatrice.clear();
        for(int i=0; i < x; i++){
            scanf("%d", &temp); alice.insert(temp);
        }
        for(int i=0; i < y; i++){
            scanf("%d", &temp); beatrice.insert(temp);
        }int cont = 0;
        for(set<int>:: iterator i= alice.begin(); i != alice.end(); i++){
            cout << *beatrice.find(*i) << "    " << endl;
            if(*beatrice.find(*i) == *i){
                cont += 1;
                beatrice.erase(*i);
            }
        }for(set<int>:: iterator i= beatrice.begin(); i != beatrice.end(); i++){
            if(*alice.find(*i) == *i) cont += 1;
        }
        printf("%d\n", cont);
    }
}