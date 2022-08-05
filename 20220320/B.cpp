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
        char str[2000000];
        scanf("%s", str);
        int len = strlen(str);
        int alph[258] = {};
        int index = -1;
        for (int i = len - 1; i >= 0; i--){
            int al = int(str[i]);
            if(alph[al] == 0){
                index = i;
                alph[al] += 1;
            }
        }
        printf("%s\n", str + index);
    }
    return 0;
}