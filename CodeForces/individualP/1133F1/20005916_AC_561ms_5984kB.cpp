#include <bits/stdc++.h>
#define MAXS 200007

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, m;

int grau[MAXS];
vector<pii> arestas;

struct unionfind{
  int pai[MAXS], sz[MAXS];

  void setup(){
    iota(pai, pai+MAXS, 0);
    fill(sz, sz+MAXS, 1);
  }
  int find(int a){
    if(pai[a] == a) return a;
    return pai[a] = find(pai[a]);
  }
  void uni(int a, int b){
    int A = find(a), B = find(b);
    if(A == B) return;
    if(sz[A] < sz[B]) swap(A, B);
    pai[A] = B;
    sz[B] += sz[A];
  }
}root;

int main(){
  cin >> n >> m;
  int a, b;
  for(int i =0; i < m;++i){
    cin >> a >> b;
    arestas.pb(mp(a, b));
    grau[a]++; grau[b]++;
  }
  int maxi = 0, ind = -1;
  for(int i = 1; i <= n; ++i){
    if(grau[i] > maxi){
      maxi = grau[i];
      ind = i;
    }
  }
  root.setup();
  for(auto it : arestas){
    if(it.first == ind){
      root.uni(it.first, it.second);
      cout << it.first << " " << it.second << "\n";
    }else if(it.second == ind){
      root.uni(it.first, it.second);
      cout << it.first << " " << it.second << "\n";
    }
  }
  for(auto it : arestas){
    if(root.find(it.first) != root.find(it.second)){
      root.uni(it.first, it.second);
      cout << it.first << " " << it.second << "\n";
    }
  }
}