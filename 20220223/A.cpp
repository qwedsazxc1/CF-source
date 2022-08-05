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
        int x1, y1;
        int x2, y2;
        int x3, y3;
        
        scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
        if(y1 == y2){
            if(y3 < y2){
                if(x1 > x2)
                    x1 -= x2;
                else
                    x1 = x2 - x1;

                printf("%d\n", x1);
                continue;
            }
            printf("0\n");
            continue;
        }
        if(y3 == y2){
            if(y1 < y2){
                if(x3 > x2)
                    x3 -= x2;
                else
                    x3 = x2 - x3;

                printf("%d\n", x3);
                continue;
            }
            printf("0\n");
            continue;
        }
        if(y1 == y3){
            if(y2 < y3){
                if(x1 > x3)
                    x1 -= x3;
                else
                    x1 = x3 - x1;

                printf("%d\n", x1);
                continue;
            }
            printf("0\n");
            continue;
        }
        printf("0\n");
        continue;
    }
    return 0;
}