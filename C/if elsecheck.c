#include<stdio.h>
int main()
{
	int a;
	printf("Enter your pin\n\n");
	scanf("%i",&a);
	
	if(a==2699)
	{
		printf("\nWelcome");
	}
	
	else
	{
		printf("\nInvalid pin");
	}
	
	
	return 0;
}