#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
int check(int *a, int l){
    int sum = 0;
    int last = a[l - 1];
    for (int i = l - 1; i >= 0; i--){
        if(a[i] != last){
            break;
        }
        sum++;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        int a[t];
        for (int i = 0; i < t; i++){
            scanf("%d", &a[i]);
        }
        int last = a[t - 1];
        int ch = check(a, t);
        int ans = 0;
        while(ch != t){
            for (int i = t - 1 - ch; i >= 0; i--){
                if(ch == 0)
                    break;
                a[i] = last;
                ch--;
            }
            ans++;
            ch = check(a, t);
        }
        printf("%d\n", ans);
    }
    return 0;
}