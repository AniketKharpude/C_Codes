#include<stdio.h>
void main(){
	int arr[];
	int size,i,element,position;
	printf("Eneter Array Size");
	scanf("%d",&size);
	printf("Eneter array Elements");
	for(i=0; i<size; i++)
	{
		scanf("%d",arr[i]);
	}
	printf("Eneter array element to be insertted:");
		scanf("%d",&element);
	printf("Eneter array position to be insertted:");
		scanf("%d",&position);
		for(i=size; i>=position; i--)
		{
			arr[size+i]=arr[i];
		}
		arr[position]=element;
		size++;
		for(i=0; i<size; i++)
		{
			printf("%d",arr[i]);
		}
}