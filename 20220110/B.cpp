#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        ll a[3];
        scanf("%lld%lld%lld", &a[0], &a[1], &a[2]);
        if(a[2]-a[1]==a[1]-a[0]){
            printf("YES\n");
            continue;
        }
        ll f = a[1] - (a[2] - a[1]);
        if(f % a[0]==0 && f!=0&&f>0){
            printf("YES\n");
            continue;
        }
        if((a[2] + a[0]) % 2 == 0){
            ll s = (a[0] + a[2]) / 2;
            if(s % a[1] == 0 && s != 0&&s>0){
                printf("YES\n");
                continue;
            }
        }
        ll t = a[1] + (a[1] - a[0]);
        if(t % a[2] == 0 && t != 0  && t > 0){
            printf("YES\n");
            continue;
        }
        printf("NO\n");
    }
    return 0;
}