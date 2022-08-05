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
        int a[t];
        int st[t];
        memset(st, 0, t * sizeof(int));
        for (int i = 0; i < t;i++){
            scanf("%d", &a[i]);
            while(a[i]>t){
                a[i] /= 2;
            }
            st[a[i] - 1]++;
        }
        for (int i = t - 1; i > 0; i--){
            while(st[i]>=2){
                st[i]--;
                if(i == 1){
                    st[0]++;
                    continue;
                }
                st[((i + 1) / 2)-1]++;
            }
        }
        int checked = 1;
        for (int i = 0; i < t;i++){
            if(st[i]==0)
                checked = 0;
        }
        if(checked)
            printf("YES\n");
        else{
            printf("NO\n");
        }
    }
    return 0;
}