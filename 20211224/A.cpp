#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int t;
        scanf("%d", &t);
        int arr[t];
        long long sum = 0;
        long long avr;
        for (int i = 0; i < t;i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        avr = sum / t;
        if(avr==((double)sum)/t){
            printf("0\n");
        }else{
            printf("1\n");
        }

    }
}