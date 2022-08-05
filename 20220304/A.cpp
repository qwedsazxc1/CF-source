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
        ll t, s;
        scanf("%lld%lld", &t, &s);
        t *= t;
        s /= t;
        printf("%lld\n", s);
    }
    return 0;
}