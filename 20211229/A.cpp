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
        int arr[t];
        int ans[201] = {};
        for (int i = 0; i < t;i++){
            scanf("%d", &arr[i]);
            if(ans[arr[i]+100]>0)
                ans[-arr[i]+100]++;
            ans[arr[i]+100]++;
            
        }
        int an=0;
        for (int i = 0; i < 201;i++){
            if(ans[i]>0){
                an++;
            }
        }
        printf("%d\n", an);
    }
    return 0;
}