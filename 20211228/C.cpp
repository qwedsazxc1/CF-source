#include <iostream>
using namespace std;
using ll = long long int;
const int N = 200005;
int n;
ll H[N], h[N], h1[N];
bool isable(ll x) {
    for(int i = 0; i < n; i++) {
        h[i] = H[i];
        h1[i] = H[i];
    }
    for(int i = n - 1; i >= 2; i--) {
        if(h1[i] < x) continue;
        ll dif = h1[i] - x;
        ll d = min(dif / 3, h[i] / 3);
        h1[i] -= 3 * d;
        h1[i - 1] += d;
        h1[i - 2] += 2 * d;
    }
    /*
    for(int i = 0; i < n; i++) {
        printf("%lld ", h1[i]);
    }
    printf("\n");
    */
    for(int i = 0; i < n; i++) {
        if(h1[i] < x) return false;
    }
    return true;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            scanf("%lld", &H[i]);
        }

        ll l = 0, r = 1e10;
        while(l < r - 1) {
            ll m = (l + r) / 2;
            if(isable(m)) l = m;
            else r = m;
        }

        printf("%lld\n", l);
    }
    return 0;
}
