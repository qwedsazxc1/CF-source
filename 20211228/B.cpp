#include<set>
#include<iostream>
using ll = long long;
using ld = long double;

using namespace std;

void solve() {
    int n;
    cin >> n;

    set<pair<int, int>> s;
    for(int i = 0; i < n; i++) {
        int m, k;
        cin >> m >> k;
        s.insert({m ,k});
    }

    for(auto &it: s) {
        if (it.first == it.second) {
            cout << it.first << " " << it.second << " " << it.first << endl;
        }
        else for (int j = it.first; j <= n; j++) {
            pair<int, int> p = it;
            pair<int, int> p1 = {p.first, j - 1};
            bool f1 = p.first <= j -1;
            pair<int, int> p2 = {j + 1, p.second};
            bool f2 = j + 1 <= p.second;

            if (f1 && f2) {
                if (s.find(p1) != s.end() && s.find(p2) != s.end()) {
                    cout << p.first << " " << p.second << " " << j << endl;
                    break;
                }
            }
            else if (f1) {
                if (s.find(p1) != s.end()) {
                    cout << p.first << " " << p.second << " " << j << endl;
                    break;
                }
            } 
            else if (f2) {
                if (s.find(p2) != s.end()) {
                    cout << p.first << " " << p.second << " " << j << endl;
                    break;
                }
            }            
        }
    }

    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-->0)
        solve();
    return 0;
}
