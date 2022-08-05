#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define int long long
using namespace std;
using ll = long long;
using ld = long double;
int cal(int max, int t, int arr[]){
    int count[2] = {};
    for (int i = 0; i < t; i++){
        int distance = max - arr[i];
        if (distance & 1)
            count[0]++;
        count[1] += distance / 2;
    }
    int ans = 0;
    if(count[0] > count[1]){
        ans += count[0] * 2 - 1;
        return ans;
    }
    ans += count[0] * 2;
    count[1] -= count[0];

    ans += 4 * (count[1] / 3);
    count[1] %= 3;
    
    if(count[1] == 1)
        ans += 2;
    if(count[1] == 2)
        ans += 3;
    return ans;
}

void solve(){
    int t;
    scanf("%lld", &t);
    int arr[t];
    for (int i = 0; i < t; i++){
        scanf("%lld", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < t; i++){
        if (max < arr[i])
            max = arr[i];
    }
    int ans = min(cal(max, t, arr), cal(max + 1, t, arr));
    printf("%lld\n", ans);
}


signed main(){
    int n;
    scanf("%lld", &n);
    while(n--){
        solve();
    }
    return 0;
}