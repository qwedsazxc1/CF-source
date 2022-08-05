#include<iostream>

using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n;i++){
        int t;
        scanf("%d", &t);
        int a[t];
        for (int j = 0; j < t;j++){
            a[j] = j + 2;
            printf("%d ", a[j]);
        }
        printf("\n");
    }
        return 0;
}