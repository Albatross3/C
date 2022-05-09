#include "stack.h"
int contents[100];
int top = 0;

void make_empty(void) {
	
}
int is_empty() {
	return top == -1;
}
int is_full() {
	return top == 99;
}
void push(int i) {
	contents[top++] = i;
}
int pop() {
	return contents[--top];
}