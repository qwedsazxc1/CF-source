#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int N = 5005;
ll arr[N];
ll max_subarray[N];
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        ll x;
        scanf("%d%lld", &n, &x);
        for(int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        for(int i = 0; i <= n; i++) {
            max_subarray[i] = 0;
        }

        for(int i = 1; i <= n; i++) {
            // calculate max_subarray[i]

            ll sum = 0;
            for(int j = 0; j < i; j++) {
                sum += arr[j];
            }
            max_subarray[i] = sum;
            for(int j = i; j < n; j++) {
                sum -= arr[j - i];
                sum += arr[j];
                max_subarray[i] = max(max_subarray[i], sum);
            }
        }
        
        for(int i = n - 1; i >= 0; i--) {
            max_subarray[i] = max(max_subarray[i], max_subarray[i + 1]);
        }

        ll ans = 0;
        for(int i = 0; i <= n; i++) {
            ans = max(max_subarray[i] + x * i, ans);
            printf("%lld ", ans);
        }
        printf("\n");
    }
    return 0;
}
