#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n, t;
    scanf("%d%d", &n, &t);
    int a[n];
    memset(a, 0, sizeof(int) * n);
    while(t--){
        int input;
        scanf("%d", &input);
        a[input - 1]++;
    }
    int sum = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==0)
            sum++;
    }
    if(!(sum == 1)){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}