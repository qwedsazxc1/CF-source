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
        int l1, r1, l2, r2;
        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
        if (l2 > r1 || l1 > r2){
            printf("%d\n", l1 + l2);
            continue;
        }
        printf("%d\n", max(l1, l2));
    }
    return 0;
}