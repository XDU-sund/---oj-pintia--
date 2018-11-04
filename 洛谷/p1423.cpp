#include<stdio.h>
int main(void)
{
	float a;
	scanf("%f",&a);
	int kase = 0;
	float len = 2;
	float sum = 0;
	while (sum < a)
	{
		sum += len;
		len *= 0.98;
		kase++;
	}
	printf("%d",kase);
	return 0;
}
