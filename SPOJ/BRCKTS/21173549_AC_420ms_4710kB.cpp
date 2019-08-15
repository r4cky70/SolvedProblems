#include <bits/stdc++.h>
#define MAXS 30007
#define INF 1234567890

#define make_pair(a, b) mp(a,b)
#define pb push_back
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;

struct tip{
    int o;
    int c;
    tip(){
        o = 0;
        c = 0;
    }
    tip(int a, int b){
        o = a;
        c = b;
    }
};


string arr;
int n, q;

tip oper(tip a, tip b){
    tip temp;
    if(a.c == 0 || b.o == 0){
        if(-a.c + b.o > 0){
            temp.o += -a.c + b.o;
        }else{
            temp.c -= -a.c + b.o;
        }
    }else{
        temp.o = b.o;
        temp.c = a.c;
    }
    if(a.o - b.c > 0){
        temp.o += a.o - b.c;
    }else temp.c -= a.o - b.c;
    return temp;
}


struct segtree{
    tip tree[MAXS*4];

    void build(int no, int l, int r){
        if(l == r){
            tree[no] = arr[l] == '(' ? tip(1, 0) : tip(0, 1);
        }else{
            int mid = (l+r)/2;
            build(no*2, l, mid);
            build(no*2+1, mid+1, r);
            tree[no] = oper(tree[no*2], tree[no*2+1]);
        }
    }
    void update(int no, int l, int r, int x){
        if(l == r){
            swap(tree[no].o, tree[no].c);
        }else{
            int mid = (l+r)/2;
            if(x > mid){
                update(no*2+1, mid+1, r, x);
            }else{
                update(no*2, l, mid, x);
            }
            tree[no] = oper(tree[no*2], tree[no*2+1]);
        }
    }
    bool query(){
        return tree[1].o == 0 && tree[1].c == 0;
    }
    // int teste(){
    //     cout << tree[1].o  << " " << tree[1].c << " mazoq\n";
    // }
}root;


int main(){
    // freopen("out.txt", "r", stdin);
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cont = 0;
    for(int k = 0; k < 10; ++k){
        cin >> n;
        cout << "Test " << ++cont << ":\n";
        cin >> arr;
        root.build(1, 0, n-1);
        cin >> q;
        int t;
        for(int i = 0; i < q; ++i){
            cin >> t;
            if(t == 0) cout << (root.query() ? "YES\n" : "NO\n");
            else root.update(1, 0, n-1, t-1);
            // root.teste();
        }
    }
}