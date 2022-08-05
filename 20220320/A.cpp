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
        sort(arr, arr + t);
        int ans = arr[t - 1] + arr[t - 2];
        printf("%d\n", ans);
    }
    return 0;
}