#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define INF 0x3f3f3f3f
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        int row, column;
        scanf("%d%d", &row, &column);
        char board[row + 1][column + 1];
        for (int i = 0; i < row; i++){
            scanf("%s", board[i]);
        }
        int row_index = INF, column_index = INF;
        for (int i = 0; i < row; i++){
            for (int j = 0; j < column; j++){
                if (board[i][j] == 'R'){
                    if (i < row_index)
                        row_index = i;
                    if (j < column_index)
                        column_index = j;
                }
            }
        }
        if (board[row_index][column_index] == 'E'){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}