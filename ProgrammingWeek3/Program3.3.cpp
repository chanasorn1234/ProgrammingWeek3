#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int factorial();
int x;

int main()
{	
	char value[] = { 'U','n', 'd', 'e', 'f', 'i', 'n', 'e', 'd' };
	printf("Enter Number: ");
	scanf("%d", &x);
	if (x > 1)
	{
		factorial();
		
	}
	else
	{
		for (int i = 0; i <= 8; i++)
		{
			printf("%c", value[i]);
		}
		printf("\n");
		printf("End Program");
	}
	
	return 0;
}

int factorial()
{
	int fac = 1;
	while (x>1)
	{
	
		fac *= x;
		x -= 1;
	}
	printf("factorial = %d\n",fac);
	printf("End Program");
	return fac;
	
}