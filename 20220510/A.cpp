#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d\n", &n);
    while(n--){
        char str[10];
        scanf("%s", str);
        int f = 0, s = 0;
        for (int i = 0; i < 3; i++){
            f += str[i] - '0';
        }
        for (int i = 3; i < 6; i++){
            s += str[i] - '0';
        }
        if (f == s)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}