#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int input;
        int ans = 0;
        scanf("%d", &input);
        for (int i = 1; i*i <= input; i++){
            ans++;
            
        }
        for (int i = 1; i*i*i <= input; i++){
            ans++;
            if ((int)sqrt(i)*(int)sqrt(i)==i){
                ans--;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}