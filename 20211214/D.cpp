#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long int;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int ans = 0;
        int t,op;
        scanf("%d%d", &t,&op);
        int array[t];
        for (int i = 0; i < t;i++){
            scanf("%d", &array[i]);
        }
        sort(array, array + t);
        while(op--){
            if (array[t - 2 - op] > 0 && array[t - 1] > 0){
                ans += array[t - 2 - op] / array[t - 1];
                array[t - 1] = 0;
                array[t - 2 - op] = 0;
                sort(array, array + t);
            }
        }
        for (int i = 0; i < t;i++){
            ans += array[i];
        }
        printf("%d\n", ans);
    }
    return 0;
}