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
        int n;
        scanf("%d", &n);
        ll a[n];
        ll b[n];
        ll a_sum = 0;
        ll b_sum = 0;
        for (int i = 0; i < n; i++){
            
            scanf("%lld", &a[i]);
            a_sum += a[i];
        }
        for (int i = 0; i < n; i++){
            scanf("%lld", &b[i]);
            b_sum += b[i];
        }

        if (b_sum > a_sum){
            printf("-1\n");
            continue;
        }

        ll minus[n];
        for (int i = 0; i < n; i++){
            minus[i] = a[i] - b[i];
        }
        ll prefix[n];
        prefix[0] = minus[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + minus[i];
        }
        int ans = 0;
        ll dp[n][n];
        for (int i = 0; i < n; i++)
        {
            dp[0][i] = prefix[i];
        }
    }
    return 0;
}