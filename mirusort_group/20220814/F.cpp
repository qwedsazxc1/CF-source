#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
ll normal_sum(ll n);
ll s2k1_sum(ll n);
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        ll n, k;
        scanf("%lld%lld", &n, &k);

        ll ans = 0;
        while (n > 0 && k > 0){
            if (n % 2 != 0)
                ans += s2k1_sum(n / 2 + 1);
            else
                ans += s2k1_sum(n / 2);

            n /= 2;
            k--;
        }

        ans += normal_sum(n);

        printf("%lld\n", ans);
    }
    return 0;
}

ll s2k1_sum(ll n){
    return n * n;
}

ll normal_sum(ll n){
    return n * (n + 1) / 2;
}