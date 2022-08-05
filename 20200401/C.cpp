#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    int a[6]={};
    for (int i = 5; i >= 0;i--){
        
        if(n&1){
            a[i]++;
        }
        n /= 2;
        
    }
    swap(a[1], a[5]);
    swap(a[2], a[3]);
    
    int ans = 0;
    for (int i = 0; i < 6;i++){
        ans *= 2;
        if(a[i])
            ans += 1;
    }
    printf("%d", ans);
    return 0;
}