#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	float c = (float)a + (float)b * 0.1;
	printf("%d",(int)(c / 1.9));
	return 0;
}
