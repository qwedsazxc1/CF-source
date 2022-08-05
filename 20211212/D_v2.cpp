#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
#define int long long
void solve();

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n == 1) {
        cout << "YES\n";
        return;
    } else if (n == 2) {
        if (arr[0] <= arr[1])
            cout << "YES\n";
        else
            cout << "NO\n";
        return;
    }
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    if (s.size() < n) {
        cout << "YES\n";
        return;
    } else {
        vector<int> brr(n);
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            brr[i] = arr[i];
        }
        int cnt = 0;
        sort(brr.begin(), brr.end());
        for (int i = 0; i < n; i++) {
            m[arr[i]] = brr[i];
        }
        s.clear();
        for (int i = 0; i < n; i++) {
            int p = 0;
            int x = arr[i];
            while (s.find(x) == s.end()) {
                p++;
                s.insert(x);
                x = m[x];
            }
            if (p > 0 && p % 2 == 0) {
                cnt++;
            }
        }
        if (cnt % 2 == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}