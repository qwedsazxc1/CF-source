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
            arr[i] = t - i;
        }
        int tmp = t;
        int j = 0;
        while(tmp--){
            for (int i = 0; i < t; i++){
                printf("%d ", arr[i]);
            }
            swap(arr[t - j - 2], arr[t - j - 1]);
            j++;
            printf("\n");
        }
    }
    return 0;
}