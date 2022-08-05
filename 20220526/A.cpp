#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        if (sum % n != 0) {
            printf("NO\n");
            continue;
        }
        int average = sum / n;
        int flag = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] == average){
                flag = 1;
                break;
            }
        }
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}