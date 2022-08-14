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
        int n, k;
        scanf("%d%d", &n, &k);
        ll array[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &array[i]);
        }
        ll k_arr[k];
        for (int i = 0; i < k; i++){
            k_arr[i] = array[i];
        }
        sort(k_arr, k_arr + k);
        ll ans = k_arr[0];
        ll now = ans * 2;
    }
    return 0;
}