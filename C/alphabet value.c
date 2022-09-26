#include<stdio.h>
int main()
{
	char value;
	
	printf("Enter any charcter\n");
	scanf("%c",&value);
	
	if(value>='a'&& value<='z'||value>='A'&& value<='Z')
	{
		printf("Value is an alphbet");
	
	}
	else
	{
		printf("Value is not an alphabet");
	}
	
	
	
	
	
	
	
	return 0;
}