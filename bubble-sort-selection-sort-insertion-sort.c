/*
bubble sort
selection sort
insertion sort
*/

#include<stdio.h>
#include<string.h>
#include<stdarg.h>

//bubble sort
int bubble_sort(int arr[], int len)
{
	int i,j,temp;

	for(i=0;i<len-1;i++) {

		for(j=0;j<len-i-1;j++){
			if(arr[j] > arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}
	}
}

//selection sort
int selection_sort(int arr[], int len)
{
	int i,j,min_index,temp;

	for(i=0;i<len;i++){
		min_index=i;
		for(j=i+1;j<len;j++) {
			if(arr[j] < arr[min_index])
				min_index=j;
		}
		temp=arr[i];
		arr[i]=arr[min_index];
		arr[min_index]=temp;
	}

}

//insertion sort
int insertion_sort(int arr[], int len)
{
	int i,j,k,key;
	for(i=1;i<len;i++){
		key=arr[i];
		for(j=0;j<i;j++){
			if(arr[j] > key) {
				for(k=i;k>j;k--){
					arr[k]=arr[k-1];
				}
				arr[j]=key;
				break;
			}

		}
		
	}
}

int main()
{
	int a[] = {5,6,7,8,9,4};
	int b[] = {5,6,7,8,9,4};
	int c[] = {5,6,7,8,9,4};
	int i;

	printf("bubble sort\n");
	bubble_sort(a,6);
	for(i=0;i<6;i++)
		printf("%d ",a[i]);
	printf("\n");

	printf("selection sort\n");
	selection_sort(b,6);
	for(i=0;i<6;i++)
		printf("%d ",b[i]);
	printf("\n");
	
	printf("insertion sort\n");
	insertion_sort(c,6);
	for(i=0;i<6;i++)
		printf("%d ",c[i]);
	printf("\n");

	return 0;
}
