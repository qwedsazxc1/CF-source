#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        string s;
        cin >> s;
        int len = s.length();
        int n_time = 0;

        int a[len];
        memset(a, 0, sizeof(int)*len);
        for (int i = 0; i < len;i++){
            if(s[i]=='N'){
                n_time++;
            }
        }
        if(n_time==1){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}