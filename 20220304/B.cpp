#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
bool cmp(ll a, ll b){
    if(a > b)
        return true;

    return false;
}
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
        sort(arr, arr + t, cmp);
        ll sum1 = 0, sum2 = 0;
        sum2 += arr[t - 1];
        int i = 0;
        if(t & 1){
            while(sum1 <= sum2 && i < t / 2 ){
                sum1 += arr[i];
                sum2 += arr[t - i - 2];
                i++;
            }
            if(sum1 > sum2){
                printf("YES\n");
                continue;
            }
            printf("NO\n");
            continue;
        }
        while(sum1 <= sum2 && i < t / 2  - 1){
                sum1 += arr[i];
                sum2 += arr[t - i - 2];
                i++;
            }
            if(sum1 > sum2){
                printf("YES\n");
                continue;
            }
            printf("NO\n");
            continue;
    }
    return 0;
}