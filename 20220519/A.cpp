#include <iostream>
#include <cstring>
int main(){
	int n;
	scanf("%d", &n);
	while (n--){
		char str[100 + 5];
		scanf("%s", str);
		int length = strlen(str);
		if (length == 2){
			printf("%c\n", str[1]);
			continue;
		}
		char min = str[0];
		for (int i = 0; i < length; i++){
			if (min > str[i])
				min = str[i];
		}
		printf("%c\n", min);
	}
	return 0;
}
