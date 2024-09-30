//WAP to short array elements in ascending order and print them
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
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
        printf("The array elements in ascending order:\n");
        for(i=0;i<10;i++)
        {
            printf("arr[%d]:%d\n",i,arr[i]);
        }
    
    return 0;
}