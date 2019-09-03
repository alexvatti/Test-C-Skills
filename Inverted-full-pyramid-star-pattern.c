/*
Inverted - full - star - pyramid - pattern

* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

*/
#include<stdio.h>
#include<string.h>
#include<stdarg.h>
int main()
{
	int height,i,j,k,flag=0,m=0;
	printf("Enter the height of the pyramid=\n");
	scanf("%d",&height);

	for(i=height;i>=1;i--) {
		m++;
		for(j=1;j<m;j++){
			printf(" ");
		}
		flag=0;
		k=0;
		while(k!=(2*i-1)){
			if(flag==0){
				printf("*");
				flag=1;
			}else { 
				printf(" ");
				flag=0;
			}
			k++;
		}
		printf("\n");
	}
	return 0;
}
