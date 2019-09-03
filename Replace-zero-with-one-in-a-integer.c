/*

Program to replace all 0’s with 1 in a given integer is discussed here. 
Given an integer as an input, all the 0’s in the number has to be replaced with 1.

For example, consider the following number

Input: 102405
Output: 112415

Input: 56004
Output: 56114
*/


#include<stdio.h>
#include<stdarg.h>
#include<string.h>

int main()
{
	int num,i,k,len=0;
	char buffer[40];

	printf("enter a number:\n");
	scanf("%d",&num);

	sprintf(buffer,"%d",num);
	printf("Given num in str =%s\n",buffer);
	len=strlen(buffer);
	i=0;
	while(len>=0){
		if(buffer[i]=='0')
			buffer[i]='1';
		i++;
		len--;
	}

	printf("Required num in str=%s\n",buffer);
	k=atoi(buffer);
	printf("Final Output num=%d\n",k);
	return 0;
}
