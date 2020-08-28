#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int End();
int main()
{
	char value1[] = { 'd', 'e','f','i','n','e','d', };
	char value2[] = {'u','n','d','e','f','i','n','e','d', };
	int x, y, z;
	printf("Enter Number1: ");
	scanf("%d", &x);
	printf("Enter Number2: ");
	scanf("%d", &y);
	printf("Enter Number3: ");
	scanf("%d", &z);
	if (x + y == z || x - y == z || y - x == z || x * y == z || x / y == z || y / x == z)
	{
		for (int i = 0; i <= 6; i++)
		{
			printf("%c", value1[i]);
			
		}
		printf("\n");
	}
	else
	{
		for (int i = 0; i <= 8; i++)
		{
			printf("%c", value2[i]);
			
		}
		printf("\n");
	}
	End();
	return 0;
}

int End()
{
	char end[] = { '¨','º', 'â', '»', 'Ã', 'á','¡','Ã','Á' };
	for (int j = 0; j <= 8; j++)
	{
		printf("%c\n", end[j]);
	}

	return 0;
}
