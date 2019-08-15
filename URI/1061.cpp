#include <bits/stdc++.h>
using namespace std;

    // scanf("Dia %d", &d1);
    // scanf("%d : %d : %d", &h1, &m1, &s1);
    // scanf("Dia %d", &d2);
    // scanf("%d : %d : %d", &h2, &m2, &s2);
    
int main(){
    int d1, h1, m1, s1, d2, h2, m2, s2, temt, dias, sdias, d, h, m, s;
    string uselles;
    cin >> uselles >> d1;
    cin >> h1 >> uselles >> m1 >> uselles >> s1;
    cin >> uselles >> d2;
    cin >> h2 >> uselles >> m2 >> uselles >> s2;
    temt = d2 * 86400 + h2 * 3600 + m2 * 60 + s2 - (d1 * 86400 + h1 * 3600 + m1 * 60 + s1);
    d = temt / 86400;
    h = temt % 86400 / 3600;
    m = temt % 86400 % 3600 / 60;
    s = temt % 86400 % 3600 % 60;

    cout << d << " dia(s)\n" << h << " hora(s)\n" << m << " minuto(s)\n" << s << " segundo(s)\n";
    return 0;
}