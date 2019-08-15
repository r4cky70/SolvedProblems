#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nome; double sal, ven, tot;
    cout << fixed << setprecision(2); 
    cin >> nome >> sal >> ven;
    tot = sal + ven * 0.15;
    cout << "TOTAL = R$ " << tot << endl;
    return 0;
}