#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		bool flag = false;
		queue<int> q;
		q.push(n);
		do {
			int f = q.front();
			q.pop();
			if (f == m){
				flag = true;
				break;
			}
			if (f % 3 != 0)
				continue;
			q.push(f / 3 * 2);
			q.push(f / 3);
		} while(!q.empty());
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
