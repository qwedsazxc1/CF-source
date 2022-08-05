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
        int sum[200000][2]={};
        int dis[200000] = {};
        for (int i = 0; i < 200000;i++){
            dis[i] = 1e6;
        }
        int min_dis = 1e6;
        for (int i = 0; i < t; i++){
            scanf("%d", &a[i]);
            if(sum[a[i]][0]){
                if(i-sum[a[i]][1]<min_dis)
                    min_dis = i - sum[a[i]][1];
            }
            sum[a[i]][0]++;
            sum[a[i]][1] = i;
        }
        if(min_dis==1e6){
            printf("-1\n");
            continue;
        }
        printf("%d\n", t - min_dis);
    }
    return 0;
}