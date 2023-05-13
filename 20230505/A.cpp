#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		map<int, int> m;
		int n; cin >> n;
		vector<int> pre(n + 1, 0);
		for (int i = 0; i < n; i++){
			int input;
			cin >> input;
			m[input]++;
			pre[input]++;
		}
		for (int i = 1; i <= n; i++){
			pre[i] += pre[i - 1];
		}
		bool flag = true;
		for (int i = 0; i <= n; i++){
			if (i + pre[i] == n){
				cout << i << "\n";
				flag = false;
				break;
			}
		}
		if (flag){
			cout << "-1\n";
		}
	}
}
