#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int array[7];
        for (int i = 0; i < 7;i++){
            scanf("%d", &array[i]);
        }
        int ans[3];
        ans[0] = array[0];
        ans[1] = array[1] ;
        ans[2] = array[6] - ans[0] - ans[1];
        for (int i = 0; i < 3;i++){
            printf("%d ", ans[i]);
        }
        printf("\n");
    }
}