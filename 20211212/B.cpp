#include<iostream>
#include<set>
#include<vector>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n;i++){
        int t;
        scanf("%d", &t);
        int array[t];
        for (int j = 0; j < t;j++){
            int input;
            scanf("%d", &input);
            array[j] = input;
        }
        int ans = 0;
        int max = array[t - 1];
        for (int j = t - 2; j >= 0;j--){
            if(array[j]>max){
                ans += 1;
                max = array[j];
            }
        }
        printf("%d\n", ans);
    }
        return 0;
}