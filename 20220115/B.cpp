#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t; 
    cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    vector<int>res;
	    for(int i = 1; i <= n; i++){
	        for(int j = 1; j <= m; j++){
                int mx = max({n - i + m - j, i - 1 + j - 1, n - i + j - 1, i - 1 + m - j});
                res.push_back(mx);
	        }
	    }
	    sort(res.begin(), res.end());
	    for(int i=0;i<res.size();i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
	return 0;
}
