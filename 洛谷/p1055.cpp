#include<stdio.h>
int main(void)
{
	char b[13];
	for (int i = 0; i < 13; i++)
	{
		scanf("%c",&b[i]);
	}
	int a[13];
	for (int i = 0; i < 12; i++)
	{
		a[i] = b[i] - '0';
	}
	int sum = a[0] * 1 + a[2] * 2 + a[3] * 3 + a[4] * 4 + a[6] * 5 + a[7] * 6 + a[8] * 7 + a[9] * 8 + a[10] * 9;
	int k = sum % 11;
	if (k == b[12] - '0' || ((k == 10) && b[12] == 'X'))
		printf("Right");
	else
		{
			for (int i = 0; i < 12; i++)
			{
				printf("%c",b[i]);
			}
				if (k != 10)
					printf("%d",k);
				else printf("X");
		}
	return 0;
}
