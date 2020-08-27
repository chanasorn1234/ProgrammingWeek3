#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int End();
int main()
{
	int x, y,z;
	printf("Enter Number1: ");
	scanf("%d", &x);
	printf("Enter Number2: ");
	scanf("%d", &y);
	z = x + y;
	if (z > 0)
	{ 
		if (z % 2 == 0)
		{
			printf("Positive Even\n");
		}
		else
		{
			printf("Positive Odd\n");
		}
	}
	if (z < 0)
	{
		if (z % 2 == 0)
		{
			printf("Negative Even\n");
		}
		else
		{
			printf("Negative Odd\n");
		}
	}
	if (z == 0)
	{
		printf("Zero\n");
	}	
	End();
	return 0;
}

int End()
{
	char ending[] = { 'E','n','d','P','r','o','g','r','a','m' };
	for (int i = 0; i < 3; i++)
	{
		printf("%c", ending[i]);
		
	}
	printf(" ");
	for (int i = 3; i <= 9; i++)
	{
		printf("%c", ending[i]);
	}

	return 0;
}