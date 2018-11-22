#include<stdio.h>
int main(void)
{
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	int max = a;
	if (b > max)
	max = b;
	if (c > max)
	max = c;
	int min = b;
	if (a < min)
	min = a;
	if (c < min)
	min = c;
	
	for (int i = 2; i < min; i++)
	{
		if (max % i == 0 && min % i == 0)
		{
			max /= i;
			min /= i;
			i--;
		}
	}
	printf("%d/%d",min,max);
	return 0;
}
