#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define INF 0x3f3f3f3f
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        int t, length;
        scanf("%d%d", &t, &length);
        char str_ptr[t][length + 10];
        for (int i = 0; i < t; i++){
            scanf("%s", str_ptr[i]);
        }
        int min = INF;
        int sum;
        for (int i = 0; i < t - 1; i++){
            for (int k = i + 1; k < t; k++){
                sum = 0;
                for (int l = 0; l < length; l++){
                    int temp = str_ptr[i][l] - str_ptr[k][l];
                    if (temp < 0)
                        sum -= temp;
                    else
                        sum += temp;
                }
                if (min > sum)
                    min = sum;
            }
        }

        printf("%d\n", min);
        fflush(stdout);
    }
    return 0;
}