#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
typedef long long int ll;
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n;i++){
        int t;
        scanf("%d", &t);
        int array[t];
        for (int j = 0; j < t;j++){
            scanf("%d", &array[j]);
        }
        int last = -1;
        int ans = 1;
        for (int j = 0; j < t;j++){
            if(last==-1){
                if(array[j]==0){
                    last = 0;
                }
                if(array[j]==1){
                    last = 1;
                    ans += 1;
                }
            }else
            if(last==0){
                if(array[j]==0){
                    ans = -1;
                    break;
                }
                if(array[j]==1){
                    ans += 1;
                    last = 1;
                    
                }
            }else
            if(last==1){
                if(array[j]==0){
                    last = 0;
                }
                if(array[j]==1){
                    ans += 5;
                    last = 1;
                }
            }
        }
        printf("%d\n", ans);
    }
}