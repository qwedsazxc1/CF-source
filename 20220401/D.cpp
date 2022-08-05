#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;    // ABC 0 YES
using ll = long long;   // ARC 0 YES
using ld = long double; // AGC 0 NO
void tolower(char *str);// ABC 100-999  YES
int main(){             // ARC   YES
                        // AGC   NO
    char str[5];
    scanf("%s", str);
    int n;
    scanf("%d", &n);
    if(strcmp(str, "ABC") == 0){
        if(n <= 1999){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    else if(strcmp(str, "ARC") == 0){
        if(n <= 2799){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }else{
        if(n >= 1200){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}

void tolower(char *str){
    int len = strlen(str);
    for (int i = 0; i < len; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 'a' - 'A';
    }
}