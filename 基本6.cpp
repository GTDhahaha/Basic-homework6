#include<stdio.h>
#include<stdlib.h>

int main()
{
	int y;
	printf("plaese enter a year\n");
	scanf("%d",&y);
	if (y%4 == 0)
	{
		printf("This year is a leap year\n");
	}
	else
	{
		printf("This year is not a leap year\n");	
	}
	system("pause");
	return 0;
}
