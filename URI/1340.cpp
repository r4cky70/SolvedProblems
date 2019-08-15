#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;stack <int> pilha; priority_queue <int> prio; queue <int> fila; bool bpilha, bprio, bfila;
    while(cin >> n){
        pilha = stack<int>(); prio=priority_queue<int>(); fila=queue<int>(); bpilha = true; bprio = true; bfila = true;
        for(int i=0; i < n; i++){
            cin >> x >> y;
            if(x == 1){
                pilha.push(y); prio.push(y); fila.push(y);
            }
            else{
                if(bfila == true){
                    if(fila.front() == y) fila.pop();
                    else bfila = false;
                }
                if(bprio == true){
                    if(prio.top() == y) prio.pop();
                    else bprio = false;
                }
                if(bpilha == true){
                    if(pilha.top() == y) pilha.pop();
                    else bpilha = false;
                }
            }
        }
        if(bfila == true && bprio == false && bpilha == false) cout << "queue\n";
        else if(bprio == true && bfila == false && bpilha == false) cout << "priority queue\n";
        else if(bpilha == true && bfila == false && bprio == false) cout << "stack\n";
        else if(bpilha == false && bfila == false && bprio == false) cout << "impossible\n";
        else cout << "not sure\n";
    }
}