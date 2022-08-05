#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char str[2000007]={};
        scanf("%s", str);
        int ch = 1;
        int index;
        int len = strlen(str);
        for (int i = len - 1; i > 0; i--){
            if(str[i]+str[i - 1] - 2 * '0' >= 10){
                ch = 0;
                index = i;
                break;
            }
        }
        int check=1;
        if(ch){
            for (int i = 0; i < len;i++){
                if(i == 0){
                    printf("%d", str[i] + str[i + 1] - 2 * '0');
                    i++;
                    check = 0;
                    continue;
                }
                if(check&&str[i]=='0'){
                    continue;
                }

                printf("%c", str[i]);
                check = 0;
                
            }
            printf("\n");
            continue;
        }
        for (int i = 0; i < len;i++){
            if(index-1==i){
                printf("%d", str[i] + str[i + 1] - 2 * '0');
                i++;
                check = 0;
                continue;
            }

            if(check&&str[i]=='0'){
                continue;
            }
            printf("%c", str[i]);
            check = 0;
        }
        printf("\n");
    }
    return 0;
}