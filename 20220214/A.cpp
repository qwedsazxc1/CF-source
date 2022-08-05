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
        int ind = -1, max = arr[0];
        for (int i = 0; i < t; i++){
            if(arr[i] != i + 1){
                max = arr[i];
                ind = i;
                break;
            }
        }
        int min = arr[ind], last_ind = -1;
        for (int i = ind; i < t; i++){
            if(min > arr[i]){
                min = arr[i];
                last_ind = i;
            }
        }   
        if(ind == -1){
            for (int i = 0; i < t; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
            continue;
        }
        for (int i = 0; i < ind; i++){
            printf("%d ", arr[i]);

        }
        for (int i = last_ind; i >= ind; i--){
            printf("%d ", arr[i]);
        }
        for (int i = last_ind + 1; i < t; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}