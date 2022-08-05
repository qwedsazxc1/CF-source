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
        int cur_bit = -1;
        int subsegment = 0;
        for (int i = 0; i < length; i += 2){
            if (str[i] != str[i + 1]){
                count++;
            }else{
                if (cur_bit != str[i])
                    subsegment++;
                cur_bit = str[i];
            }
        }
        printf("%d %d\n", count, max(subsegment, 1));
    }
    return 0;
}