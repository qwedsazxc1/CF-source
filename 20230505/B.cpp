#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int arr[n];
		for (auto &x: arr)
			cin >> x;
		bool flag = true;
		int ini;
		for (int i = 0; i < n / 2; i++){
			if (arr[i] != arr[n - i - 1]){
				ini = arr[i] - arr[n - i - 1];
				if (ini < 0)
					ini = -ini;
				flag = false;
				break;
			}
		}
		if (flag){
			cout << "0\n";
			continue;
		}
		for (int i = 0; i < n / 2; i++){
			int temp = arr[i] - arr[n - i - 1];
			if (temp < 0)
				temp = -temp;
			ini  = gcd(ini, temp);
		}

		cout << ini << "\n";
	}
}
