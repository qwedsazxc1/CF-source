#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        ll t, x;
        scanf("%lld%lld", &t, &x);
        ll arr[t];
        map<ll, ll> m;
        ll ans = 0;
        for (ll i = 0; i < t; i++){
            scanf("%lld", &arr[i]);
            m[arr[i]]++;
        }
        for(auto &z:m){
            while((z.second)--){
                if(m[z.first * x]){
                    m[z.first * x]--;
                    continue;
                }
                ans++;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}