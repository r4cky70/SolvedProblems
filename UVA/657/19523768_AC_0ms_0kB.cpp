#include <bits/stdc++.h>
#define MAXS 57

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int n, m, cou = 0;
int X[4]= {-1,0,0,1}, Y[4]= {0,-1,1,};

char mx[MAXS][MAXS];
int color[MAXS][MAXS], dot[MAXS][MAXS];



void dfs1(int i,int j){
    dot[i][j] = 1;
    int vx, vy, k;
    for(k = 0; k < 4; k++){
        vx = i + X[k];
        vy =j + Y[k];
        if(vx >= 0 && vx < n && vy >= 0 && vy < m){
            if(mx[vx][vy] == 'X' && dot[vx][vy] == 0){
                dfs1(vx,vy);
            }
        }
    }
}

int dfs(int i,int j){
    if(mx[i][j] == 'X' && dot[i][j] == 0){
        dfs1(i,j);
        cou++;
    }
    color[i][j] = 1;
    int vx,vy,k;
    for(k = 0; k < 4; k++){
        vx = i + X[k];
        vy = j + Y[k];
        if(vx >= 0 && vx < n && vy >= 0 && vy < m && (mx[vx][vy] == '*'|| mx[vx][vy] == 'X')){
            if(color[vx][vy] == 0){
                dfs(vx,vy);
            }
        }
    }
    return cou;
}


int main(){
    // inp; out;
    int i, j, k, arr[MAXS], cas=0;
    while(scanf("%d %d", &m, &n) && m && n){
        cas++;
        for(i = 0; i < n; i++){
            for(j =0; j < m; j++){
                scanf(" %c",&mx[i][j]);
            }
        }
        k=0;
        int sp=0;
        int l;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                cou = 0;
                if((mx[i][j] == '*' && color[i][j] == 0) || (mx[i][j] == 'X' && color[i][j] == 0)){
                    l = dfs(i,j);
                    arr[k++] = l;
                    sp = 1;
                }
            }
        }
        sort(arr,arr+k);
        printf("Throw %d\n",cas);
        if(sp == 1){
            for(i = 0; i < k - 1; i++){
                printf("%d ",arr[i]);
            }
            printf("%d",arr[k-1]);
        }
        else{
            printf("0");
        }
        printf("\n\n");
        memset(arr,0,sizeof(arr));
        memset(color,0,sizeof(color));
        memset(dot,0,sizeof(dot));
        memset(mx,'\0',sizeof(mx));
    }
}
