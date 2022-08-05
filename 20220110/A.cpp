#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        int a[t];
        int min = 2e9, max = -1;
        for (int i = 0; i < t;i++){
            scanf("%d", &a[i]);
            if(min>a[i])
                min = a[i];
            if(max<a[i])
                max = a[i];
        }
        printf("%d\n", max - min);
    }
    return 0;
}