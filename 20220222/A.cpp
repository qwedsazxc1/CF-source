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
        char str[10];
        scanf("%s", str);
        int r = 0, g = 0, b = 0, ch = 1;
        for (int i = 0; i < 6;i++){
            if (str[i] == 'r')
                r = 1;
            if(str[i] == 'g')
                g = 1;
            if(str[i] == 'b')
                b = 1;
            if(str[i] == 'R' && r == 0){
                ch = 0;
                break;
            }
            if(str[i] == 'G' && g == 0){
                ch = 0;
                break;
            }
            if(str[i] == 'B' && b == 0){
                ch = 0;
                break;
            }
        }
        if(ch){
            printf("YES\n");
            continue;
        }
        printf("NO\n");
    }
    return 0;
}