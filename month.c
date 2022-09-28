#include<stdio.h>
int main()
{
	int a1,a2=31,a3=30,a4=28,a5=29;
	
	printf("Enter month number\n");
	scanf("%i",&a1);
	
	if(a1==1||a1==3||a1==5||a1==7||a1==8||a1==10||a1==12)
	{
		printf("Day=%i",a2);
	}
	else if(a1==4||a1==6||a1==9||a1==11)
	{
		printf("Day=%i",a3);
	}
	else if(a1==2)
	{
		printf("Day=%i or %i",a4,a5);
	}
	else
	{
		printf("Invalid month");
	}
	
	
	
	return 0;
}