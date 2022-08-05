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
        int f[t], s[t];
        for (int i = 0; i < t; i++){
            scanf("%d", &f[i]);
        }
        for (int i = 0; i < t; i++){
            scanf("%d", &s[i]);
        }
        for (int i = 0; i < t; i++){
            if(f[i] > s[i]){
                swap(f[i], s[i]);
            }
        }
        int f_max = -1, s_max = -1;
        for (int i = 0; i < t; i++){
            if(f_max < f[i])
                f_max = f[i];
            if(s_max < s[i])
                s_max = s[i];
        }
        printf("%d\n", f_max * s_max);
    }
    return 0;
}