#include<utility>
#include<iostream>

using namespace std;
typedef long long LL;
const int N = 110;

int n;
LL h[N], k[N];

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin  >> k[i];
    for (int i = 1; i <= n; i++) 
        cin >> h[i];
    LL ans = 0;
    LL st = k[n] + 1;
    LL c = 0;
    LL last = -1;
    for (int i = n; i >= 0; i--)
    {
        if (k[i] < st) {
            ans += c * (c + 1) / 2;
            last = k[i];
        }
            
        if (k[i] - h[i] + 1 < st)
        {
            st = k[i] - h[i] + 1;
            c = last - st + 1;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}