#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int ans = 0;
		int c = 0;
		for (int i = 0; i < n; i++){
			int input;
			cin >> input;
			if (input == 1)
				c = -1;
			c++;
			ans = max(ans, c);
		}
		cout << ans << "\n";
	}
	return 0;
}
