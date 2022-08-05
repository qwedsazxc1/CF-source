#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        ll l, r, k;
        scanf("%lld%lld%lld", &l, &r, &k);
        if(l == r && r == 1){
            printf("NO\n");
            continue;
        }
        if(l==r&&r!=1){
            printf("YES\n");
            continue;
        }
        if(k > (r - l) / 2){
            printf("YES\n");
            continue;
        }
        if(k < (r - l) / 2){
            printf("NO\n");
            continue;
        }
        if(l&1&&r&1){
            printf("NO\n");
            continue;
        }
        if(!(l&1)&&!(r&1)){
            printf("YES\n");
            continue;
        }
        printf("NO\n");
    }
    return 0;
}