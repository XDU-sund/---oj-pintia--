#include<stdio.h>
int main(void)
{
	long long int x,n;
	scanf("%lld%lld",&x,&n);
	long long int sum = 1;
	long long int kase = sum;
	for (long long int i = 0; i < n; i++)
	{
		kase = sum * x;
		sum += kase;
		kase = sum;
	}
	printf("%lld",sum);
	return 0;
}
