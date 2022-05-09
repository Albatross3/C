#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main()
{
	char* s1 = "computer";
	char* s2 = "science";
	
	printf("%s", s1);
	if (strcmp(s1, s2) < 0) {
		strcat(s1, s2);
	}
	else {
		strcat(s2, s1);
	}
	s1[strlen(s1) - 6] = '\0';
	printf("%s",s1);
}