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
        int t, k;
        scanf("%d%d", &t, &k);
        int a[t];
        if(t == 2){
            if(k == 0){
                printf("0 1\n");
                
            }else{
                printf("-1\n");
            }
            continue;
        }
        if(t == 4){
            if(k == 3){
                printf("-1\n");
                continue;
            }
        }
        for (int i = 0; i < t; i++){
            a[i] = i;
        }
        swap(a[0], a[k]);
        if(k == t - 1){
            swap(a[t - 1], a[t - 2]);
            swap(a[t - 2], a[t - 3]);
        }
        for (int i = 0; i < t / 2; i++){
            printf("%d %d\n", a[i], a[t - i - 1]);
        }
    }
    return 0;
}