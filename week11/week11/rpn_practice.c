#include <stdio.h>
#include "stack.h"
int main()
{
	// scnaf_s 사용할 때 /n 까지 다음에 전달될 수 있는 부분 유의해야함
	char ch;
	do
	{
		printf("Enter an RPN expression: ");
		make_empty();
		scanf_s(" %c", &ch,1);
		while ((ch >= 48 && ch <= 57) || ch=='+' || ch == '-' || ch == '*' || ch == '/' || ch == '=') {
			// operator 
			if ((ch >= 48 && ch <= 57)) {
				push(ch - '0');
			}
			// operand
			else if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
				if (ch == '+') {
					int last = pop();
					int first = pop();
					push(first+last);
				}
				else if (ch == '-') {
					int last = pop();
					int first = pop();
					push(first-last);
				}
				else if (ch == '*') {
					int last = pop();
					int first = pop();
					push(first*last);
				}
				else if (ch == '/') {
					int last = pop();
					int first = pop();
					push(first/last);
				}
			}
			// operand =
			else{
				printf("Value of expression: %d\n",pop());
				break;
			}

			scanf_s(" %c", &ch,1);
		}
	} while ((ch >= 48 && ch <= 57) || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=');
}