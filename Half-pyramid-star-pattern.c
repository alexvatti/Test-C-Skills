/*
Half - Pyramid - Star - pattern

*
**
***
****
*****
******

*/
#include<stdio.h>
#include<string.h>
#include<stdarg.h>
int main()
{
	int height=0,i,j;
	printf("enter the height of pyramid\n");
	scanf("%d",&height);

	for(i=1;i<=height;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
