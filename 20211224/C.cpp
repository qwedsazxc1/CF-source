#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        char arr1[t+5];
        char arr2[t+5];
        int sum1=0;
        int sum2 = 0;
        int same = 0;
        scanf(" %c", &arr1[0]);
        for (int i = 1; i < t;i++){
            scanf("%c", &arr1[i]);
            if(arr1[i]=='1')
                sum1++;
        }
        if(arr1[0]=='1')
            sum1++;
        scanf(" %c", &arr2[0]);
        for (int i = 1; i < t;i++){
            scanf("%c", &arr2[i]);
            if(arr2[i]=='1')
                sum2++;
        }
        if(arr2[0]=='1')
            sum2++;
        for (int i = 0; i < t; i++){
            if (arr1[i] == arr2[i])
                same++;
        }
        if (t - sum1 +1!= sum2 && sum1 != sum2){
            printf("-1\n");
            continue;
        }
        printf("%d\n", min(same, t - same));
    }
    return 0;
}