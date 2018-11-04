#include<stdio.h>
int main(void)
{
	int a;
	int b[42];
	for (int i = 0; i < 42; i++)
	b[i] = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&a);
		b[a % 42]++;
	}
	int base = 0;
	for (int i = 0; i < 42; i++)
	{
		if (b[i])
			base++;
	}
	
	printf("%d",base);
	return 0;
}
