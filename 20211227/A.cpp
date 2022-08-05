#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int arr[3];
        scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
        sort(arr, arr + 3);
        if(arr[2]==arr[0]+arr[1]){
            printf("YES\n");
            continue;
        }
        if(arr[0]==arr[1]&&!(arr[2]&1)){
            printf("YES\n");
            continue;
        }
        if(arr[1]==arr[2]&&!(arr[0]&1)){
            printf("YES\n");
            continue;
        }
        printf("NO\n");
    }
    return 0;
}