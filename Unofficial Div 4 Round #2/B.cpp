#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int left = a[0], right = a[n-1];
    int le = 1, ri = 1;
    for (int i = 1; i < n;i++){
        if(a[i]>=left){
            le++;
            left = a[i];
            continue;
        }
        break;
    }
    for (int i = n - 2; i >= 0;i--){
        if(right<=a[i]){
            ri++;
            right = a[i];
            continue;
        }
        break;
    }
    int ans = le + ri;
    if(ans>n)
        ans = n;
    printf("%d\n", ans);
    return 0;
}