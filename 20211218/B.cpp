#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        ll ans;
        ll x, y;
        scanf("%lld%lld", &x, &y);
        int input;
        scanf("%d", &input);
        int array[input];
        ll x_max;
        for (int i = 0; i < input;i++){
            scanf("%d", &array[i]);
        }
        x_max = array[input - 1] - array[0];
        scanf("%d", &input);
        int arr[input];
        for (int i = 0; i < input;i++){
            scanf("%d", &arr[i]);
        }
        if(arr[input-1]-arr[0]>x_max){
            x_max = arr[input - 1] - arr[0];
        }
        ans = x_max * y;
        scanf("%d", &input);
        int max, min;
        for (int i = 0; i < input;i++){
            int in;
            scanf("%d", &in);
            if(i==0)
                min = in;
            if(i==input-1){
                max = in;
            }
        }
        ll y_max = max - min;
        scanf("%d", &input);
        for (int i = 0; i < input;i++){
            int in;
            scanf("%d", &in);
            if(i==0)
                min = in;
            if(i==input-1)
                max = in;
        }
        if(max-min>y_max){
            y_max = max - min;
        }
        if(ans<y_max*x){
            ans = y_max * x;
        }
        printf("%lld\n", ans);
    }
    return 0;
}