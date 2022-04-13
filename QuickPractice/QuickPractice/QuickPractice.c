#include <stdio.h>

int main(void)
{
	int a = 2, b = 5, c = 3;
	{
		b = c + a - 1;
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d\n\n", c);

		{
			int c = 5;
			printf("%d\n", a);
			printf("%d\n", b);
			printf("%d\n\n", c);
		}
	}
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n\n", c);

	
}
