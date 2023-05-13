#include <bits/stdc++.h>

using namespace std;
  
struct union_and_find{
	vector<int> parent, size;
	int n = 0, compoment;
	union_and_find(int n){
		parent.resize(n);
		size.assign(n, 1);
		compoment = n;
		for (int i = 0; i < n; i++)
			parent[i] = i;
	}
	int find(int a){
		if (parent[a] == a)
				return a;
		return parent[a] = find(parent[a]);
	}
	bool _union(int a, int b){
		int a_boss = find(a), b_boss = find(b);
		if (a_boss == b_boss)
			return false;
		compoment--;
		if (size[a_boss] > size[b_boss])
			swap(a_boss, b_boss);
		parent[a_boss] = b_boss;
		size[b_boss] += size[a_boss];
		return true;
	}
};

int main(){
	int n, l, r;
	cin >> n >> l >> r;
	union_and_find dsu(n);
	for (int i = 0; i < n; i++){
		int u, v;
		cin >> u >> v;
		u--; v--;
		dsu._union(u, v);
	}
	vector<int> arr;
	arr.reserve(dsu.compoment);
	for (int i = 0; i < n; i++){
		if (dsu.parent[i] == i)
			arr.push_back(dsu.size[i]);
	}
	int res = 0;
	for (int i = 0; i < arr.size(); i++)
		if (arr[i] < l + r)
			res ^= arr[i] / l;
	
	if (res){
		cout << "Alice\n";
	}
	else{
		cout << "Bob\n";
	}
}
