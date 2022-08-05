#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define INF 0x3f3f3f3f3f3f3f3f
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
        ll min = INF;
        for (int i = 0; i < t; i++){
            scanf("%lld", &arr[i]);
            if (arr[i] < min)
                min = arr[i];
        }
        ll ans = 0;
        for (int i = 0; i < t; i++){
            ans += arr[i] - min;
        }
        printf("%lld\n", ans);
    }
    return 0;
}