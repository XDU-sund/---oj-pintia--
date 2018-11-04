#include<stdio.h>
int main(void)
{
	int ele;
	float cost;
	scanf("%d",&ele);
	if (ele <= 150)
	{
		cost = 0.4463 * ele;
	}
	else if (ele > 150 && ele <= 400)
	{
		cost = 150 * 0.4463 + (ele - 150) * 0.4663;
	}
	else if (ele > 400)
	cost = 150 * 0.4463 + 250 * 0.4663 + (ele - 400) * 0.5663;
	printf("%.1f",cost);
	return 0;
}


