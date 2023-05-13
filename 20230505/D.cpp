#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<int> arr(n), pre(n, -1), post(n, -1);
		for (auto &x: arr)
			cin >> x;
		pre[0] = arr[0];
		post[n - 1] = arr[n - 1] - n + 1;
		for (int i = 1; i < n; i++){
			pre[i] = max(arr[i] + i, pre[i - 1]);
			post[n - i - 1] = max(post[n - i], arr[n - i - 1] - (n - i - 1));
		}
		int ans = -1;
		for (int i = 1; i < n - 1; i++){
			ans = max(ans, pre[i - 1] + arr[i] + post[i + 1]);
		}
		cout << ans << "\n";
	}
}
