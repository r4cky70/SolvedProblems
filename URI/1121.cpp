#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int dir, temp, n, m, s, cont; pair <int, int> pos;string campo[100]; char c;
//     while(scanf("%d %d %d", &n, &m, &s), !(n == 0 && m == 0 && s ==0)){
//         for(int i=0; i<n; i++){
//             cin >> campo[i]; cin.ignore();
//             for(int j=0; j < m; j++){
//                 if(campo[i][j] == 'N') {pos.first = i; pos.second = j; dir = 0;campo[i][j] = '.';}
//                 else if(campo[i][j] == 'O') {pos.first = i; pos.second = j; dir = 1;campo[i][j] = '.';}
//                 else if(campo[i][j] == 'S') { pos.first = i; pos.second = j; dir = 2;campo[i][j] = '.';}
//                 else if(campo[i][j] == 'L'){pos.first = i; pos.second = j; dir = 3;campo[i][j] = '.';}
//             }
//         }
//         cont = 0;
//         for(int i=0; i<s; i++){
//             temp = getchar();
//             if(temp == 'D'){dir = (dir + 1) % 4;}
//             else if(temp == 'E'){if(dir == 0) dir = 4; else dir--;}
//             else{
//                 if(dir == 0){
//                     if(pos.first > 0 && campo[pos.first -1][pos.second] == '*'){
//                         pos.first--; cont += 1; campo[pos.first][pos.second] = '.';
//                     }else if(pos.first > 0 && campo[pos.first -1][pos.second] == '.'){
//                         pos.first--;
//                     }
//                 }else if(dir == 1){
//                     if(pos.second < m - 1 && campo[pos.first][pos.second + 1] == '*'){
//                         pos.second++; cont += 1; campo[pos.first][pos.second] = '.';
//                     }else if(pos.second < m - 1 && campo[pos.first][pos.second + 1] == '.'){
//                         pos.second++;
//                     }
//                 }else if(dir == 2){
//                     if(pos.first < n - 1 && campo[pos.first + 1][pos.second] == '*'){
//                         pos.first++; cont += 1; campo[pos.first][pos.second] = '.';
//                     }else if(pos.first < n - 1 && campo[pos.first + 1][pos.second] == '.') pos.first++;
//                 }else{
//                     if(pos.second > 0 && campo[pos.first][pos.second - 1] == '*'){
//                         pos.second--; cont += 1; campo[pos.first][pos.second] = '.';
//                     }else if(pos.second > 0 && campo[pos.first + 1][pos.second] == '.') pos.second--;
//                 }
//             }
//         }getchar();
//     printf("%d\n", cont);
//     }
// }

int main(){
    string campo[100], temp;int cont, n, m, s, dir; pair <int, int> pos;
    while(scanf("%d %d %d", &n, &m, &s), n != 0 && m != 0 && s != 0){
        for(int i=0; i < n; i++){
            cin >> campo[i];
            for(int j=0; j < m; j++){
                if(campo[i][j] == 'N'){ pos.first = i; pos.second = j; campo[i][j] = '.'; dir = 0;
                }else if(campo[i][j] == 'L'){ pos.first = i; pos.second = j; campo[i][j] = '.'; dir = 1;
                }else if(campo[i][j] == 'S'){ pos.first = i; pos.second = j; campo[i][j] = '.'; dir = 2;
                }else if(campo[i][j] == 'O'){ pos.first = i; pos.second = j; campo[i][j] = '.'; dir = 3;}
            }
        }cin >> temp; cont = 0;
        for(int i=0; i < s; i++){
            if(temp[i] == 'F'){
                if(dir == 0){
                    if(pos.first > 0 && campo[pos.first -1][pos.second] == '*'){
                        cont++; pos.first--; campo[pos.first][pos.second] = '.';
                    }else if(pos.first > 0 && campo[pos.first - 1][pos.second] == '.') pos.first--;
                }else if(dir == 1){
                    if(pos.second < m - 1 && campo[pos.first][pos.second + 1] == '*'){
                        cont++; pos.second++; campo[pos.first][pos.second] = '.';
                    }else if(pos.second < m - 1 && campo[pos.first][pos.second + 1] == '.') pos.second++;
                }else if(dir == 2){
                    if(pos.first < n - 1 && campo[pos.first + 1][pos.second] == '*'){
                        cont++; pos.first++; campo[pos.first][pos.second] = '.';
                    }else if(pos.first < n - 1 && campo[pos.first + 1][pos.second] == '.') pos.first++;
                }else{
                    if(pos.second > 0 && campo[pos.first][pos.second - 1] == '*'){
                        cont++; pos.second--; campo[pos.first][pos.second] = '.';
                    }else if(pos.second > 0 && campo[pos.first][pos.second - 1] == '.') pos.second--;
                }
            }else if(temp[i] == 'D'){dir += 1; dir %= 4;}
            else{if(dir == 0) dir = 3; else dir--;}
        }printf("%d\n", cont);
    }
}