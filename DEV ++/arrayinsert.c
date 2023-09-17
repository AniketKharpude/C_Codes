#include<stdio.h>

int main()
{
    int n;
    int arr[50],i;
        int loc;
         int key;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for (i=0; i<n;i++)
    {
        printf("element %d :",i);
        scanf("%d \n" ,&arr[i]);   
    }
        printf("Enter Element to Insert :");
        scanf("%d \n",&key);
        printf("Enter Location to Insert : ");
        scanf("%d \n",&loc);
    
        
        for (i=n; i>=loc; i--)
        {
            arr[i+1]=arr[i];
            // printf("%d\n",arr[i]);
        }
       arr[loc]=key;
     printf("%d",arr[i]);   
}
