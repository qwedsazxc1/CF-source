#include <iostream>
#include <cstring>

int main(){
	int n;
	scanf("%d", &n);
	while (n--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		long long y = b, z = c, x = a + y * z;
		printf("%lld %lld %lld\n", x, y, z);
	}
	return 0;
}

