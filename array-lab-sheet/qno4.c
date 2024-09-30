//WAP to print largest and smallest among array elements of size 10
#include<stdio.h>
int main()
{
    int i,j,arr[10];
    printf("Enter the array elements:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
        printf("largest:%d Smallest:%d",arr[9],arr[0]);
    
    return 0;
}