#include <stdio.h>
void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones);
int main()
{
	int dollars, twenties, tens, fives, ones;
	printf("Enter a dollar amount: ");
	scanf_s("%d", &dollars);
	pay_amount(dollars, &twenties, &tens, &fives, &ones);
	printf("\n$20 bills: %d", twenties);
	printf("\n$10 bills: %d", tens);
	printf("\n $5 bills: %d", fives);
	printf("\n $1 bills: %d", ones);
}
void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones) {
	*twenties = dollars / 20;
	*tens = (dollars % 20) / 10;
	*fives = ((dollars % 20) % 10) / 5;
	*ones = (((dollars % 20) % 10) % 5) / 1;
}