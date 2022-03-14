#include <stdio.h>
int main(void)
{
	int dayOfMonth, startDay;
	printf("Enter number of days in month: ");
	scanf_s("%d", &dayOfMonth);
	printf("Enter starting day of the week (1=Sun, 2=Mon, ... , 7=Sat): ");
	scanf_s("%d", &startDay);
	printf("Calendar for Dong-Jun Lee\n");

	for (int i = 0; i < 3 * (startDay-1); i++) {
		printf(" ");
	}
	for (int i = 1; i <= dayOfMonth; i++) {
		printf("%3d", i);
		if ((startDay+i-1)%7==0) printf("\n");
	}
	return 0;
}