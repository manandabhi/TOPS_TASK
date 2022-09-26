#include<stdio.h>
int main()
{
	int a,b,c,max;
	
	printf("Enter first num..!\n");
	scanf("\n%i",&a);
	
	printf("\nEnter second num..!\n");
	scanf("\n%i",&b);
	
	printf("\nEnter third num..!\n");
	scanf("\n%i",&c);
	
	max=(a>b)? (a>c)? a:c : (b>c)? b:c;	
	
	printf("\nmax num=%i",max);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}