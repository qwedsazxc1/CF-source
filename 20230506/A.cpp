#include <bits/stdc++.h>

using namespace std;

int main(){
	string s = "codeforces";
	int t;
	cin >> t;
	while (t--){
		string str;
		cin >> str;
		int ans = 0;
		for (int i = 0; i < 10; i++){
			if (s[i] != str[i])
				ans++;
		}
		cout << ans << "\n";
	}
}
