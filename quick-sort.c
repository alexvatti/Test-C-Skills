/*
quick sort
*/

#include<stdio.h>
#include<stdarg.h>
#include<string.h>

int partition(int arr[],int low,int high)
{
	int p=arr[low];
	int temp;

	while(low <= high)
	{
		while(arr[low] < p)
			low++;
		while(arr[high] > p)
			high--;
		if(low <= high) {
			temp=arr[low];
			arr[low]=arr[high];
			arr[high]=temp;
			low++;
			high--;
		}
	}
	return low;
}

int quicksort(int arr[] , int low , int high)
{
	int p;
	if(low < high ) {
		p=partition(arr,low,high);
		quicksort(arr,low,p-1);
		quicksort(arr,p,high);
	}
}

int main()
{
	int a[]={4,5,1,2,7,3,9,8};
	int i=0;

	quicksort(a,0,7);
	printf("quick sort.......\n");
	for(i=0;i<=7;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
