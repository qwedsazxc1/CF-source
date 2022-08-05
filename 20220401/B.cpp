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
    int arr[10] = {-1000, 1200, 1400, 1600, 1900, 2100, 2300, 2400, 2600, 3000};
    for (int i = 0; i < 10; i++){
        if(n < arr[i]){
            printf("%d\n", arr[i]);
            break;
        }
    }
        return 0;
}