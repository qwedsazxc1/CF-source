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
        int t;
        scanf("%d", &t);
        int arr[t];
        for (int i = 0; i < t; i++){
            scanf("%d", &arr[i]);
        }
        int ind[50] = {};
        for (int i = 0; i < t; i++){
            int j = 0;
            while(arr[i]){
                if(arr[i] & 1){
                    ind[j] = 1;
                    
                }
                j++;
                arr[i] /= 2;
            }
        }
        int ans = 0;
        for (int i = 30; i >= 0;i--){
            ans *= 2;
            if(ind[i])
                ans++;
            
        }
        printf("%d\n", ans);
    }
    return 0;
}