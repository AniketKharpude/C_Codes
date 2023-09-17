#include<stdio.h>

int main()
{
    int n=5;
    int arr[100]={0};
	int i;
        int loc;
         int key;
//    printf("Enter size of array");
//    scanf("%d",&n);
//    printf("Enter elements:\n");
//    insert elements in array
    for (i=0; i <= n; i++)
    {
     arr[i]=i+1;
    }
//    print orignal array
    	for (i = 0; i <= n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
        printf("Enter Element to Insert\n");
        scanf("%d",&key);
        printf("Enter Location to Insert :\n ");
        scanf("%d",&loc);
        n++;
        for (i=n-1; i >= loc; i--)
        {
     		arr[i]=arr[i-1];
            // printf("%d\n",arr[i]);
        }
       arr[loc] = key;
       for (i=0; i  < n; i++)
     printf("%d",arr[i]);   
}
