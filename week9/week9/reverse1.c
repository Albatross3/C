#include <stdio.h>
int main()
{
	char array[50];
	char input;
	int i = 0;
	printf("Enter a message: ");
	while ((input = getchar()) != '\n') {
		array[i] = input;
		i++;
	}
	printf("Reversal is: ");
	for (int j = i-1; j >= 0; j--) {
		putchar(array[j]);
	}
	return 0;
}