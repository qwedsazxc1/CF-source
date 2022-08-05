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
    while (n--){
        int length;
        scanf("%d", &length);
        char str[length + 10];
        scanf("%s", str);
        int count = 0;
        int bit_count = 0;
        int cur_bit = str[0];
        for (int i = 0; i < length; i++){
            if (cur_bit != str[i]){
                if (bit_count & 1){
                    count++;
                    bit_count = 0;
                    cur_bit = str[i];
                    continue;
                }
                bit_count = 1;
                cur_bit = str[i];
                continue;
            }
            bit_count++;
        }
        printf("%d\n", count);
    }
    return 0;
}