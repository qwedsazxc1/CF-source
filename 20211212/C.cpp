#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n;i++){
        int t, x;
        scanf("%d%d", &t, &x);
        ll array[t];
        for (int j = 0; j < t;j++){
            scanf("%lld", &array[j]);
        }
        sort(array, array + t);
        int final = 1;
        int check = 1;
        ll ans=0;
        if(array[0]<0){
            check = 0;
            if(array[0]*(-1)>array[t-1]){
                final = 0;
            }
        }
        if(!check){
            for (int j = 0; array[j] < 0 && j < t; j += x)
            {
                if(j==0&&!final){
                    ans += array[0] * -1;
                }else{
                    ans += 2 * array[j] * -1;
                }
            }
        }
        for (int j = t - 1; array[j] > 0 && j >= 0; j -= x)
        {
            if(j==t-1&&final){
                    ans += array[t - 1];
            }else{
                ans += 2 * array[j];
            }
        }
        printf("%lld\n", ans);
    }
        return 0;
}