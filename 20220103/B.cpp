#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
 
#define FOR(i,n) for (int i = 0; i < n ; i ++)
 
typedef long long int ll;
 
using namespace std;
 
int main () {
	int cases;
	cin >> cases;
 
	for (int cs = 0; cs < cases; cs++) {
		int n;
		cin >> n;
 
		int min = INT_MAX, max = INT_MIN;
		int minCost = 0, maxCost = 0;
		int tempMinMaxCost = INT_MAX;
		FOR (i, n) {
			int lower, upper, cost;
			cin >> lower >> upper >> cost;
 
			if (lower < min) {
				min = lower;
				minCost = cost;
				tempMinMaxCost = INT_MAX;
			} else if (lower == min && cost < minCost) {
				minCost = cost;
			}
 
			if (upper > max) {
				max = upper;
				maxCost = cost;
				tempMinMaxCost = INT_MAX;
			} else if (upper == max && cost < maxCost) {
				maxCost = cost;
			}
 
			int totalCost = std::min (tempMinMaxCost, minCost + maxCost);
 
			if (lower == min && upper == max && cost < totalCost) {
				tempMinMaxCost = cost;
			}
 
			totalCost = std::min (tempMinMaxCost, minCost + maxCost);
 
			cout << totalCost << endl;
		}
	}
 
	return 0;
}