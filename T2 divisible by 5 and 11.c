#include<stdio.h>
int main()
{
	int a1;
	
	printf("Enter any integer number\n");
	scanf("%i",&a1);
	
	if(a1%5==0&&a1%11||a1%5==0&&a1%11==0)
	{
		printf("Divisible by 5");
	}
	
	else if(a1%11==0)
	{
		printf("Divisible by 11");
	}
	
	else
	{
		printf("Not Divisible by 5 and 11");
	}
	
	
	return 0;
}