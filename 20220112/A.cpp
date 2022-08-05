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
        int t, l;
        scanf("%d%d", &t, &l);
        int a[t];
        int one[l];
        int zero[l];
        memset(one, 0, sizeof(int) * l);
        memset(zero, 0, sizeof(int) * l);
        int max = 0;
        for (int i = 0; i < t;i++){
            scanf("%d", &a[i]);
            int tmp = a[i];
            int j = 0;
            int k = l;
            while(k--){
                if(tmp&1){
                    one[j]++;
                }else{
                    zero[j]++;
                }
                tmp /= 2;
                j++;
                if(j>max)
                    max = j;
            }
        }
        ll ans = 0;
        for (int i = max-1; i >=0;i--){
            if(one[i]>zero[i]){
                ans += 1;
            }
            ans *= 2;
        }
        ans /= 2;
        printf("%lld\n", ans);
    }
    return 0;
}