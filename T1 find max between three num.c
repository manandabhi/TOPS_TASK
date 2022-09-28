#include<stdio.h>
int main()
{
	int a1,a2,a3,max;
	
	printf("Enter first integer number\n");
	scanf("%i",&a1);
	
	printf("Enter second integer number\n");
	scanf("%i",&a2);
	
	printf("Enter third integer number\n");
	scanf("%i",&a3);
	
	printf("\n\na1=%i\na2=%i\na3=%i",a1,a2,a3);
	
	max=(a1>a2)?(a1>a3)? a1:a3  : (a2>a3)?a2:a3;
	
	printf("\n\nmax number=%i",max);
	
	return 0;
}