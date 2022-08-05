#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int row, column;
        scanf("%d%d", &row, &column);
        int array[row][column];
        for (int i = 0; i < row;i++){
            for (int j = 0; j < column;j++){
                scanf("%d", &array[i][j]);
            }
        }
    }
    return 0;
}