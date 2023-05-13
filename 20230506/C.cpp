#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		int fm = INF, sm = INF, ans = INF;
		cin >> n;
		while (n--){
			int cost;
			string s;
			cin >> cost >> s;
			if (s[0] == '1'){
				fm = min(fm, cost);
			}
			if (s[1] == '1')
				sm = min(sm, cost);
			if (s[0] == '1' && s[1] == '1')
				ans = min(ans, cost);
		}
		ans = min(ans, sm + fm);
		cout << ((ans == INF) ? -1 : ans) << "\n";
	}
	return 0;
}
