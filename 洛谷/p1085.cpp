#include<stdio.h>
int main(void)
{
	int a[7][2];
	int top = 0;
	int nuqi1 = 0;
	int nuqi2 = 0; 
	for (int i = 0;i < 7;i++)
		for (int j = 0; j < 2; j++) 
		{
			scanf("%d",&a[i][j]);
		}
	for (int i = 0; i < 7; i++)
	{
		if (a[i][0] + a[i][1] > 8)
		{
			nuqi1 = a[i][0] + a[i][1];
			if (nuqi1 > nuqi2)
			{
				top = i;
				nuqi2 = nuqi1;
			}
		}
	}
	printf("%d",top + 1);
	return 0;
}
