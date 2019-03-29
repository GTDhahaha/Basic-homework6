#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year;
	printf("plaese enter a year\n");
	scanf("%d",&year);
	if (year%400 == 0)
		printf("This year is a leap year\n");
	else if(year%100==0)
		printf("This year is not a leap year\n");
	else if(year%4==0)
		printf("This year is a leap year\n");
	else
		printf("This year is not a leap year\n");
	system("pause");
	return 0;
}
