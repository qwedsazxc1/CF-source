#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k, flag = false;
		cin >> n >> k;
		for (int i = 0; i < n; i++){
			int j = n - i;
			if ((i * (i - 1) + j * (j - 1)) / 2 == k){
					flag = true;
				cout << "YES\n";
				for (int h = 0; h < i; h++){
					cout << "-1 ";
				}
				for (int h = 0; h < j; h++){
					cout << "1 ";
				}
				cout << "\n";
				break;
			}
			
		}
		if (!flag)
			cout << "NO\n";
	}
}
