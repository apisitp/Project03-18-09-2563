#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y,h;
	scanf("%d", &x);
	for (int i = 0;i < x;i++)
	{
		for (int j = 0; j < x;j++)
		{
			printf("*");
	
		}
		printf("\n");
	}
	return 0;
}