/*
decimal to binary
decimal-to-octal-number
decimal-to-hexa-number
*/

#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include<math.h>

//decimal to binary
int convert_decimal_to_binary(int num)
{
	char str[64];
	int r,i=0,j;

	while(num){
		r=num%2;
		str[i]=r+0x30;
		num=num/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
		printf("%c",str[j]);
	printf("\n");
}
//decimal to octa
int convert_decimal_to_octa(int num)
{
	char str[64];
	int r,i=0,j;

	while(num){
		r=num%8;
		str[i]=r+0x30;
		num=num/8;
		i++;
	}
	for(j=i-1;j>=0;j--)
		printf("%c",str[j]);
	printf("\n");
}
//decimal to hexa
int convert_decimal_to_hexa(int num)
{
	char str[64];
	int r,i=0,j;

	while(num){
		r=num%16;
		if(r>=0 && r <=9 )
			str[i]=r+0x30;
		else 
			str[i]='A' + (r -10);

		num=num/16;
		i++;
	}
	for(j=i-1;j>=0;j--)
		printf("%c",str[j]);
	printf("\n");
}
//hexa to decimal
int convert_hexa_to_decimal(char *str)
{
	int sum=0,val,i=0;
	int len=strlen(str);
	char digit;
	len--;
	while(len>=0) {
		digit=str[len];
		//printf("len=%d digit=%c\n",len,digit);
		if(digit >= '0' && digit <='9')
			val=digit-0x30;
		else
			val=digit-'A'+10;
		sum+=pow(16,i) * val;	 
		i++;
		len--;
	}
	printf("num=%d\n",sum);

}
//octa to decimal
int convert_octa_to_decimal(char *str)
{
	int sum=0,val,i=0;
	int len=strlen(str);
	char digit;
	len--;
	while(len>=0) {
		digit=str[len];
		//printf("len=%d digit=%c\n",len,digit);
		if(digit >= '0' && digit <='7')
			val=digit-0x30;
		sum+=pow(8,i) * val;	 
		i++;
		len--;
	}
	printf("num=%d\n",sum);

}
//hexa to binary
int convert_hexa_to_binary(char *str)
{
	int sum=0,val,i=0;
        int len=strlen(str);
        char digit;
	len--;
        while(len>=0) {
                digit=str[i];
                if(digit >= '0' && digit <='9') {
                        switch(digit){
				case '0': printf("0000"); break;
				case '1': printf("0001"); break;
				case '2': printf("0010"); break;
				case '3': printf("0011"); break;
				case '4': printf("0100"); break;
				case '5': printf("0101"); break;
				case '6': printf("0110"); break;
				case '7': printf("0111"); break;
				case '8': printf("1000"); break;
				case '9': printf("1001"); break;
			}
                } else{

			switch(digit) {
				case 'A': printf("1010"); break;
				case 'B': printf("1011"); break;
				case 'C': printf("1100"); break;
				case 'D': printf("1101"); break;
				case 'E': printf("1110"); break;
				case 'F': printf("1111"); break;
		}
		}
         i++;
         len--;
        
    }
    printf("\n");
}
//octa to binary
int convert_octa_to_binary(char *str)
{
	int sum=0,i=0;
        int len=strlen(str);
        char digit;

	len--;
        while(len>=0) {
                digit=str[i];
                if(digit >= '0' && digit <='7') {
                        switch(digit){
				case '0': printf("000"); break;
				case '1': printf("001"); break;
				case '2': printf("010"); break;
				case '3': printf("011"); break;
				case '4': printf("100"); break;
				case '5': printf("101"); break;
				case '6': printf("110"); break;
				case '7': printf("111"); break;
			}
		}
		i++;
		len--;
	}
	printf("\n");
}
	
int main()
{
	int num=1234;
	char str[]="4D2";
	char str1[]="2322";

	printf("num in decimal = %d\n",num);

//decimal
	printf("num in binary(decimal to binary)...\n");
	convert_decimal_to_binary(num);
	
	printf("num in octa(decimal to octa)...\n");
	convert_decimal_to_octa(num);

	printf("num in hexa (decimal to hexa)...\n");
	convert_decimal_to_hexa(num);

//hexa

	printf("num in decimal(hexa to decimal)...\n");
	convert_hexa_to_decimal(str);

	printf("num in binary(hexa to binary) ...\n");
	convert_hexa_to_binary(str);

//octa

	printf("num in decimal(octa to decimal)...\n");
	convert_octa_to_decimal(str1);

	printf("num in binary (octa to binary)...\n");
	convert_octa_to_binary(str1);
}
