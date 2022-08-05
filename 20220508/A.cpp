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
        int t;
        scanf("%d", &t);
        int arr[t];
        int count_0 = 0;
        int flag = 1;
        for (int i = 0; i < t; i++){
            scanf("%d", &arr[i]);
            if (arr[i] == 0)
                count_0 += 1;
        }
        if (count_0 > 0){
            
            printf("%d\n", t - count_0);
            continue;
        }
        int value_count[150] = {};
        for (int i = 0; i < t; i++){
            value_count[arr[i]] += 1;
        }
        for (int i = 0; i < 150; i++){
            if (value_count[i] > 1){
                flag = 0;
                break;
            }
        }
        if (flag){
            printf("%d\n", t + 1);
            continue;
        }
        printf("%d\n", t);
    }
    return 0;
}