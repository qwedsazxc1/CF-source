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
    while(n--){
        int t;
        scanf("%d", &t);
        ll arr[t];
        for (int i = 0; i < t; i++){
            scanf("%lld", &arr[i]);
        }
        if(t == 1){
            printf("0\n");
            continue;
        }
        if(arr[t - 2] > arr[t - 1]){
            printf("-1\n");
            continue;
        }
        if (arr[t - 1] < 0){
            int ch = 1;
            for (int i = 0; i < t - 1;i++){
                if(arr[i] > arr[i + 1]){
                    ch = 0;
                    break;
                }
            }
            if(ch){
                printf("0\n");
                continue;
            }
            printf("-1\n");
            continue;
        }
        int op[t][3];
        int opt = 0;
        ll min = arr[t - 2] - arr[t - 1];
        for (int i = t - 3; i >= 0; i--){
            arr[i] = min;
            op[i][0] = i + 1;
            op[i][1] = t - 1;
            op[i][2] = t;

            opt++;
        }
        if(opt == 0){
            printf("0\n");
            continue;
        }
        int i = 0;
        printf("%d\n", opt);
        while(opt--){
            printf("%d %d %d\n", op[i][0], op[i][1], op[i][2]);
            i++;
        }
    }
    return 0;
}