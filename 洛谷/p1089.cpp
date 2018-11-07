#include<stdio.h> 
int main(void)
{
	int cost[12];
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < 12; i++)
		scanf("%d",&cost[i]);
	int i;
	for (i = 0; i < 12; i++)
	{
		sum1 += 300;
		sum1 -= cost[i];
		if (sum1 < 0)
		{
			printf("-%d",i+1);
			break;
		}
		sum2 += sum1 / 100;
		sum1 = sum1 % 100;
	}
	if (i == 12)
	printf("%d",sum1 + sum2 * 120);
	return 0;
	
}
