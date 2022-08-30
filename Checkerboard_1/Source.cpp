//#define_CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, i, j;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i % 2 != 0 && j % 2 != 0)
			{
				printf("*");
			}
			else if (i % 2 == 0 && j % 2 == 0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
}