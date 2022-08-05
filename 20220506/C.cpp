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
        char str[2000200];
        scanf("%s", str);
        int one_index = -1, zero_index = -1;
        int length = strlen(str);
        for (int i = 0; i < length; i++){
            if (str[i] == '1')
                one_index = i;
        }
        for (int i = length - 1; i >= 0; i--){
            if (str[i] == '0')
                zero_index = i;
        }
        if (one_index == -1 && zero_index == -1){
            printf("%d\n", length);
            continue;
        }
        if (zero_index == -1){
            printf("%d\n", length - one_index);
            continue;
        }
        if (one_index == -1){
            printf("%d\n", zero_index + 1);
            continue;
        }
        printf("%d\n", zero_index - one_index + 1);
    }
    return 0;
}