#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <set>
using namespace std;
using ll = long long;
using ld = long double;
ll lowbit(ll a){
    int time = 0;
    while(a > 0){
        if(a & 1){
            time++;
            
        }
        a >>= 1;
    }
    return time;
}
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        ll t;
        scanf("%lld", &t);
        vector<ll> v;
        ll sum = 1;

        for (int i = 2; sum < 1e13; i++){
            v.push_back(sum);
            sum *= i;
        }
        ll low = lowbit(t);
        reverse(v.begin(), v.end());
        int size = v.size();
        ll tmp = t;
        int time = 0;
        for (int i = 0; i < size;i++){
            if(v[i] <= tmp){
                tmp -= v[i];
                time++;
                if(lowbit(tmp) + time < low){
                    low = lowbit(tmp) + time;
                }
            }
            
        }
        printf("%lld\n", low);
    }
    return 0;
}