#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n, k, x, y;
        scanf("%d%d%d%d", &n, &k, &x, &y);
        int max = -1;
        for (int i = 0; i < n; i++){
            int input;
            scanf("%d", &input);
            if (max < input)
                max = input;
        }
        int ans;
        if (k * x >= max){
            if (max % x == 0){
                printf("%d\n", max / x);
                continue;
            }

            printf("%d\n", max / x + 1);
            continue;
        }

        ans = k;
        max -= k * x;
        if (max % y == 0){
            printf("%d\n", ans + max / y);
            continue;
        }
        printf("%d\n", ans + max / y + 1);
    }
    return 0;
}