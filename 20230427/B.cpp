#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int arr[n], count = 0;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
			arr[i]--;
			arr[i] %= k;
			if (i % k != arr[i])
				count++;
		}
		if (count == 0){
			cout << 0 << "\n";
		}
		else if(count == 2){
			cout << "1\n";
		}
		else{
			cout << "-1\n";
		}

	}
}
