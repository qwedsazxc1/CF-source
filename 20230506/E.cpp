#include <bits/stdc++.h>

using namespace std;

vector<vector<long long>> graph;

long long dfs(int i, int j){
	if (i >= graph.size() || i < 0 || j < 0 || j >= graph[0].size())
		return 0;
	if (graph[i][j] == 0)
		return 0;
	int cnt = graph[i][j];
	graph[i][j] = 0;
	cnt += dfs(i - 1, j);
	cnt += dfs(i + 1, j);
	cnt += dfs(i, j + 1);
	cnt += dfs(i, j - 1);
	return cnt;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		graph.resize(n);
		graph.assign(n, vector<long long>(m));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> graph[i][j];
		long long ans = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (graph[i][j])
					ans = max(ans, dfs(i, j));
		cout << ans << "\n";
	}
}
