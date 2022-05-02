#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60 /* max length of reminder message */
#define DAY_LEN 2
#define TIME_LEN 6
int read_line(char str[], int n);
int main(void)
{
	char reminders[MAX_REMIND][DAY_LEN + TIME_LEN + MSG_LEN + 1];
	char day_time_str[DAY_LEN + TIME_LEN + 1];
	char msg_str[MSG_LEN + 1];
	int day, hours, minutes, i, j, num_remind = 0;
	while (1) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}
		printf("Enter day and reminder: ");
		scanf_s("%2d", &day);

		if (day == 0)
			break;
		scanf_s("%d:%d", &hours, &minutes);
		sprintf(day_time_str, "%2d:%2d:%2d", day, hours, minutes);
		read_line(msg_str, MSG_LEN);
		for (i = 0; i < num_remind; i++)
			if (strcmp(day_time_str, reminders[i]) < 0)
				break;
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j - 1]);
		strcpy(reminders[i], day_time_str);
		strcat(reminders[i], msg_str);
		num_remind++;
	}
	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);
	return 0;
}
int read_line(char str[], int n)
{
	int ch, i = 0;
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}