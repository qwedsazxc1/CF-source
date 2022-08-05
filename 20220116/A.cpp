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
        char str[60];
        scanf("%s", str);
        int alph[26]={};
        int len = strlen(str);
        for (int i = 0; i < len; i++){
            alph[str[i] - 'a']++;
        }
        for (int i = 0; i < 26;i++){
            if(alph[i]==2){
                printf("%c", i + 'a');
            }
        }
        for (int i = 0; i < 26;i++){
            if(alph[i]==2){
                printf("%c", i + 'a');
            }
        }
        for (int i = 0; i < 26;i++){
            if(alph[i]==1){
                printf("%c", i + 'a');
            }
        }
        printf("\n");
    }
    return 0;
}