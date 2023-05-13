#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int min_f[(int)1e6 + 5] = {};
	min_f[1] = 1;
	for (int i = 2; i * i < 1e6 + 5; i++){
		for (int j = i; j < 1e6 + 5; j += i)
			if (min_f[j] == 0)
				min_f[j] = i;
	}
	for (int i = 0; i < 1e6 + 5; i++)
		if (min_f[i] == 0) min_f[i] = i;
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		if (m == 1 || n == 1){
			cout << "YES\n";
			continue;
		}
		if (n % 2 == 0){
			cout << "NO\n";
			continue;
		}
		if (m >= min_f[n]){
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
	}
}
