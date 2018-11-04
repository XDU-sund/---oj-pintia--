#include<stdio.h> 
int main(void)
{
	int a1,b1,a2,b2,c,d;
	scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
	c = a2 - a1;
	if (b2 >= b1)
	{
		d = b2 - b1;
	}
	else
	{
		c--;
		d = 60 - (b1 - b2);
	}
	printf("%d %d",c,d);
	return 0;
}
