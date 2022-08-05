#include <iostream>
#include <cstring>
#include <algorithm>

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n, m;
		scanf("%d%d", &n, &m);
		int board[n][m];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				scanf("%d", &board[i][j]);
			}
		}
		int swap_front = 0, swap_back;
		int swap_flag = 0;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m - 1; j++){
				if (board[i][j] > board[i][j + 1]){
					swap_back = j + 1;
					if (j < m - 2 && board[i][j + 1] > board[i][j + 2]){
						swap_back = j + 2;
						swap_front = j;
					}else
						for (int k = j; k >= 0; k--){
							if (board[i][k] != board[i][j]){
								swap_front = k + 1;	
								break;
							}
						}
					
					for (int k = 0; k < n; k++){
						swap(board[k][swap_front], board[k][swap_back]);
					}
					swap_flag = 1;
					break;
				}
			}
			if (swap_flag)
				break;
		}
		if (!swap_flag){
			printf("1 1\n");
			continue;
		}
		int sorted_flag = 1;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m - 1; j++){
				if (board[i][j] > board[i][j + 1]){
					sorted_flag = 0;
					break;
				}
			}
			if (!sorted_flag)
				break;
		}
		if (!sorted_flag){
			printf("-1\n");
			continue;
		}
		printf("%d %d\n", swap_front + 1, swap_back + 1);

	}
	return 0;
}
