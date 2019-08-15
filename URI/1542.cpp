#include <bits/stdc++.h>
using namespace std;

int main(){
    int q, d, p, pagina;
    while(scanf("%d", &q), q != 0){
        scanf("%d %d", &d, &p);
        pagina = (d * q / float(p - q)) * p;
        if(pagina > 1) printf("%d paginas\n", pagina);
        else printf("%d pagina\n", pagina);
    }
}
