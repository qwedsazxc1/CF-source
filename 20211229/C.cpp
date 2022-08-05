#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        if(t==1){
            int input;
            scanf("%d", &input);
            printf("0\n");
            continue;
        }
        if(t==2){
            int input, input2;
            scanf("%d%d", &input, &input2);
            printf("0\n");
            continue;
        }
        int arr[t];
        for (int i = 0; i < t;i++){
            scanf("%d", &arr[i]);
        }
        int min = 1000;
        for (int k = 0; k < t-1;k++){

            for (int i = k + 1; i < t; i++){
                int ch = 0;
                long double d = (double)(arr[i] - arr[k]) / (double)(i-k);
                long double prev = arr[k] - k * d;
                for (int j = 0; j < t;j++){
                    
                    if (arr[j] > prev - 1e-6 && arr[j] < prev + 1e-6){
                        prev = prev + d;
                        continue;
                    }else{
                        prev = prev + d;
                        ch++;
                    }
                }
                if(min>ch){
                    min = ch;
                }
            }
        }
            
        printf("%d\n", min);
    }
    return 0;
}