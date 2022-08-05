#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        int arr[t];
        for (int i = 0; i < t;i++){
            scanf("%d", &arr[i]);
        }
        int select;
        scanf("%d", &select);
        ll ans = 0;
        ans++;
        int len = 1;
        int ns = 0;
        for (int i = 1; i < t;i++){
            
            if(len==1){
                if(arr[i]+arr[i-1]<2*select){
                    i++;
                    ns = i;
                    continue;
                }
            }
            if(arr[i]>=select&&len!=1){
                ans++;
            }
        }
    }
    return 0;
}