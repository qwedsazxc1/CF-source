#include <iostream>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        int ans[n];
        for (int i = 0; i < n; i++){
            ans[n - arr[i]] = i + 1;
        }

        for (int i = 0; i < n; i++){
            printf("%d ", ans[i]);
        }
        printf("\n");
    }
}