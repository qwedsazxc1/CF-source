#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        if (n % 3 == 0){
            printf("%d\n", n / 3);
            continue;
        }
        if (n == 1){
            printf("%d\n", 2);
            continue;
        }
        if (n % 3 == 2){
            printf("%d\n", n / 3 + 1);
            continue;
        }
        printf("%d\n", n / 3 + 1);
    }
    return 0;
}