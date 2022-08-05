#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        auto b = a;
        sort(b.begin(), b.end());
        int in = (n + k + 1) / 2;
        int x = -1;
        int y = n + 1;
        for(int i=0;i<=n-in;i++){
            int L = b[i];
            int R = b[i + in - 1];
            if(R - L < y - x){
                x = L;
                y = R;
            }   
        }
        cout << x << ' ' << y << '\n';
        int mx = -1;
        int cnt = 0;
        int last = -1;
        for(int i=0;i<n;i++){
            cnt += ((x <= a[i] && a[i] <= y) ? 1 : -1);
            if(cnt > mx){
                mx = cnt;
                if(cnt >= 1 && cnt < k){
                    cout << last + 2 << ' ' << i + 1 << '\n';
                    last = i;
                }
            }
        }
        cout << last + 2 << ' ' << n << '\n';
    }
    return 0;
}