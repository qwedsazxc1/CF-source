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
        printf("%d\n", n);
        int array[n];
        for (int i = 0; i < n; i++){
            array[i] = i + 1;
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                printf("%d ", array[j]);
            }
            printf("\n");
            if (i != n - 1)
                swap(array[i], array[i + 1]);
        }
    }
    return 0;
}