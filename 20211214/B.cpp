#include<iostream>
#include<cmath>
#include<string>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int len;
        scanf("%d", &len);
        char ans[len+5];
        int check=0;
        for (int i = 0; i < len - 2;i++){
            
            char str[7];
            scanf("%s", str);
            if(len==3){
                ans[0] = str[0];
                ans[1] = str[1];
                ans[2] = 'a';
                break;
            }
            if(i==0){
                ans[0] = str[0];
                ans[1] = str[1];
                continue;
            }
            if(ans[i + check]==str[0]){
                ans[i + 1 + check] = str[1];
            }else{
                ans[i + 1] = str[0];
                ans[i + 2] = str[1];
                check++;
            }
            if(i==len-3){
                ans[len - 1] = str[1];
            }
            
        }
        
        for (int j = 0; j < len;j++){
                printf("%c", ans[j]);
            }
        printf("\n");
    }
    return 0;
}