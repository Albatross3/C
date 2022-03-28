#include <stdio.h>

#define N 5
int main(void)
{
	int i,j;
	int sum;
	int array[N][N];

	// 입력
	for (i = 0; i < N; i++) {
		printf("Enter row %d: ", i + 1);
		for (j = 0; j < N; j++) {
			scanf_s("%d", &array[i][j]);
		}
	}
	printf("\n");
	printf("\n");

	// 행 별 계산
	printf("Row totals: ");
	for (i = 0; i < N; i++) {
		sum = 0;
		for (j = 0; j < N; j++) {
			sum += array[i][j];
		}
		printf("%d ", sum);
	}
	printf("\n");

	// 열 별 계산
	printf("Column totals: ");
	for (j = 0; j < N; j++) {
		sum = 0;
		for (i = 0; i < N; i++) {
			sum += array[i][j];
		}
		printf("%d ", sum);
	}
}
