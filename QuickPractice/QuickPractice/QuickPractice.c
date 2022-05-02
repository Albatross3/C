#include <stdio.h>
void swap(int* p, int* q);
int main(void)
{
	int a = 1,b = 3;
	printf("%d, %d", a, b);
	swap(&a, &b);
	printf("%d, %d", a, b);

	
}
void avg_sum(double a[], int n, double* avg, double* sum) {
	int i;

	*sum = 0.0;
	for (i = 0; i < n; i++) 
		*sum += a[i];
	*avg = *sum / n;
}
void swap(int* p, int* q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}
int sum_array(const int a[], int n) {
	int* p, sum;
	sum = 0;
	for (p = a; p< a + n; p++) {
		sum += *p;
	}
	return sum;
}