#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n;i++){
        if(n % i == 0){
            printf("%d%d", i, n / i);
            return 0;
        }
    }
    return 0;
}