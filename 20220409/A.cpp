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
        int arr[t][2];
        for (int i = 0; i < t; i++){
            scanf("%d", &arr[i][0]);
        }
        for (int i = 0; i < t; i++){
            scanf("%d", &arr[i][1]);
        }
        for (int i = 0; i < t; i++){
            if(arr[i][0] > arr[i][1])
                swap(arr[i][0], arr[i][1]);
        }
        ll sum = 0;
        for (int i = 0; i < t - 1; i++){
            if(arr[i + 1][0] - arr[i][0] > 0)
                sum += arr[i + 1][0] - arr[i][0];
            else
                sum -= arr[i + 1][0] - arr[i][0];
            if(arr[i + 1][1] - arr[i][1] > 0)
                sum += arr[i + 1][1] - arr[i][1];
            else
                sum -= arr[i + 1][1] - arr[i][1];
        }
        printf("%lld\n", sum);
    }
    return 0;
}