/*
Inverted- Half - Pyramid - star - pattern 

******
*****
****
***
**
*

*/

#include<stdio.h>
#include<string.h>
#include<stdarg.h>
int main()
{
	int height=0,i,j;
	printf("enter the height of pyramid\n");
	scanf("%d",&height);

	for(i=0;i<height;i++)
	{
		for(j=1;j<=height-i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
