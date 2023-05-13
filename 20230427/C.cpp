#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		map<int, int> m;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int input;
			cin >> input;
			for (int j = 2; j * j <= input; j++){
				while (input % j == 0){
					m[j] += 1;
					input /= j;
				}
				
			}
			if (input != 1)
				m[input] += 1;
		
		}
		int count = 0, res = 0;
		for (auto p : m){
			res += p.second >> 1;
			count += p.second & 1;
		}
		res += count / 3;
		cout << res << "\n";
	}
}
