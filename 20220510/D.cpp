#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;


int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        int n, m;
        scanf("%d%d", &n, &m);
        int board[n][m];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                scanf("%d", &board[i][j]);
            }
        }
        int ans = -1;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                int temp = board[i][j];
                for (int k = 1; i + k < n && j - k >= 0; k++){
                    temp += board[i + k][j - k];
                }
                for (int k = 1; i + k < n && j + k < m; k++){
                    temp += board[i + k][j + k];
                }
                for (int k = 1; i - k >= 0 && j - k >= 0; k++){
                    temp += board[i - k][j - k];
                }
                for (int k = 1; i - k >= 0 && j + k < m; k++){
                    temp += board[i - k][j + k];
                }
                if (temp > ans)
                    ans = temp;
            }
        }
        printf("%d\n" , ans);
    }
    return 0;
}