#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
string s;
int pre[N], suf[N];
vector<int> zero_pos;
bool isable(int x) {
	if((int)zero_pos.size() <= x + 2) return true;
	for(int i = 0; i < (int)zero_pos.size() - x - 1; i++) {
		int left = i, right = i + x + 1;
		int one = pre[zero_pos[left]] + suf[zero_pos[right]];
		// cout << "left right = " << zero_pos[left] << " " << zero_pos[right] << endl;
		// cout << "one = " << one << " x = " << x << endl;
		if(one <= x) return true;
	}
	return false;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> s;
		int n = (int)s.size();
		zero_pos.clear();
		zero_pos.push_back(0);
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') {
				zero_pos.push_back(i + 1);
			}
		}
		zero_pos.push_back(n + 1);

		pre[0] = 0;
		for(int i = 1; i <= n; i++) {
			pre[i] = pre[i - 1] + (s[i - 1] == '1');
		}

		suf[n + 1] = 0;
		for(int i = n; i >= 1; i--) {
			suf[i] = suf[i + 1] + (s[i - 1] == '1');
		}

		int l = -1, r = n + 1;
		while(l < r - 1) {
			// cout << "l r = " << l << " " << r << endl;
			int m = (l + r) / 2;
			if(isable(m)) r = m;
			else l = m;
		}
		cout << r << "\n";
	}

	return 0;
}