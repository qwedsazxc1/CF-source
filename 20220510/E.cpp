#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;

int lower_bound(int nums[], int target, int size)
{
    int l = 0, r = size, m = 0;
    while(l < r)
    {
        m = (l + r) >> 1;
        if(nums[m] >= target) l = m + 1;
        // add = means upper bound
        else r = m;
    }
    return l;
    //if return is nums.size() means no lower_bound
}

int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        int t, q;
        scanf("%d%d", &t, &q);
        int arr[t];
        for (int i = 0; i < t; i++){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + t);
        int dp[t];
        dp[t - 1] = arr[t - 1];
        for (int i = t - 2; i >= 0; i--){
            dp[i] = dp[i + 1] + arr[i];
        }
        for (int j = 0; j < q; j++){
            int target;
            scanf("%d", &target);
            int ans = lower_bound(dp, target, t);
            if (ans == 0)
                printf("-1\n");
            else
                printf("%d\n", t - ans + 1);
        }
        
    }
    return 0;
}