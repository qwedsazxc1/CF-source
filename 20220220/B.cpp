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
        for (int i = 0; i < t;i++){
            scanf("%d", &arr[i]);
        }
        int ans = 0;
        for (int i = 1; i < t - 1; i++){
            if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]){
                if(i != t - 2){
                    arr[i + 1] = max(arr[i], arr[i + 2]);
                }else
                    arr[i + 1] = arr[i];
                ans++;
            }
        }
        printf("%d\n", ans);
        for (int i = 0; i < t;i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}