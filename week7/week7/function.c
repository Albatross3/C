#include <stdio.h>
float pow(float x, int n);
float polynomial(float x);
int main()
{
	float x;
	printf("Enter value for x: ");
	scanf_s("%f", &x);
	printf("Polynomial value: %.f", polynomial(x));
}
float pow(float x, int n) {
	float result = 1.0;
	while (n-- > 0)
		result *= x;
	return result;
}
float polynomial(float x) {
	float answer = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
	return answer;
}