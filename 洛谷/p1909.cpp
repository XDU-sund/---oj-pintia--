#include<stdio.h>
int main() {
    int z;
    int a[3][2];
    scanf("%d",&z);
    for (int i = 0;i < 3;i++)
        for (int j = 0;j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }

	int b1,b2,b3;
	
	if ((z / a[0][0]) * a[0][0] < z)
		b1 = (z / a[0][0] + 1 ) * a[0][1];
	else 
		b1 = z / a[0][0] * a[0][1];
		
	if ((z / a[1][0]) * a[1][0] < z)
		b2 = (z / a[1][0] + 1 ) * a[1][1];
	else 
		b2 = z / a[1][0] * a[1][1];
		
	if ((z / a[2][0]) * a[2][0] < z)
		b3 = (z / a[2][0] + 1 ) * a[2][1];
	else 
		b3 = z / a[2][0] * a[2][1];
		
    int top = b1;
    if (b2 < top)
        top = b2;
    if (b3 < top)
        top = b3;
    printf("%d",top);
    return 0;
}
