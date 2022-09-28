#include<stdio.h>
int main()
{
	char alphabet;
	printf("Enter any alphabet\n");
	scanf("%c",&alphabet);
	

	if(alphabet=='a'||alphabet=='A'||alphabet=='e'||alphabet=='E'||alphabet=='i'||alphabet=='I'||alphabet=='o'||alphabet=='O'||alphabet=='u'||alphabet=='U')
	{
		printf("Alphabet is Vowel");
	}
	
	else
	{
		printf("Alphabet is Consonant");
	}
	
	
	
	
	return 0;
}