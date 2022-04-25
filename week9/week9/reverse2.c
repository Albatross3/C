#include<stdio.h>
int main()
{
	char array[50], * p;
	p = array;
	int i = 0;
	printf("Enter a message: ");
	scanf_s("%c", p);
	do
	{
		i++;
		scanf_s("%c", (p + i));
	} while (*(p+i)!='\n');
	printf("Reversal is: ");
	for (p = array + i - 1; p >= array; p--)
		printf("%c", *p);
}