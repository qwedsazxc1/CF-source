#include <cstring>
#include <iostream>
using namespace std;

#define MAX 300005
typedef long long ll;
ll x[MAX], a[MAX], f[505][505];
int n, len, k;

void input()
{
    cin >> n >> len >> k;
    for (int i = 1; i <= n; ++i)
        cin >> x[i];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solve()
{
    memset(f, 0x3f, sizeof(f));
    x[n + 1] = len;
    f[1][0] = 0;
    for (int i = 2; i <= n + 1; ++i)
        for (int j = 0; j <= k; ++j)
            for (int l = i - 1; l > 0 && j - i + l + 1 >= 0; --l)
                f[i][j] = min(f[i][j], f[l][j - i + l + 1] + (x[i] - x[l]) * a[l]);
        
    ll res = 1e18;
    for (int i = 0; i <= k; ++i)
        res = min(res, f[n + 1][i]);
    cout << res << endl;
}

int main()
{
    input();
    solve();
    return 0;
}
