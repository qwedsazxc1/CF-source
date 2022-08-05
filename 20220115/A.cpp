#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int row, column, r, c;
        scanf("%d%d%d%d", &row, &column, &r, &c);
        char board[row][column + 5];
        for (int i = 0; i < row;i++){
            scanf("%s", board[i]);
        }
        int sum = 0;
        for (int i = 0; i < row;i++){
            for (int j = 0; j < column;j++){
                if(board[i][j]=='B'){
                    sum++;
                    break;
                }
                    
            }
            if(sum)
                break;
        }
        if(sum==0){
            printf("-1\n");
            continue;
        }
        if(board[r-1][c-1]=='B'){
            printf("0\n");
            continue;
        }
        int ch = 0;
        for (int i = 0; i < row;i++){
            if(board[i][c-1]=='B'){
                ch = 1;
                break;
            }
        }
        for (int i = 0; i < column;i++){
            if(board[r-1][i]=='B'){
                ch = 1;
                break;
            }
        }
        if(ch){
            printf("1\n");
            continue;
        }
        printf("2\n");
    }
    return 0;
}