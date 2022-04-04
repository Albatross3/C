#include <stdio.h>
#define N 8
int main(void) 
{
	int i, j;
	char checker_board[N][N];
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if ((i + j) % 2 == 0) checker_board[i][j] = 'B';
			else checker_board[i][j] = 'R';
		}
	}
	//for (i = 0; i < N; i++) {
	//	for (j = 0; j < N; j++) {
	//		printf("%c ", checker_board[i][j]);
	//	}
	//	printf("\n");
	//}
}