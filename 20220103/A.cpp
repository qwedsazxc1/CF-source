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
        int size, amount;
        scanf("%d%d", &size, &amount);
        if((size/2)+(size&1)<amount){
            printf("-1\n");
            continue;
        }
        for (int i = 0; i < size;i++){
            for (int j = 0; j < size;j++){
                if(i%2==0&&i==j&&amount>0){
                    printf("R");
                    amount--;
                }else{
                    printf(".");
                }
            }
            printf("\n");
        }
    }
    return 0;
}