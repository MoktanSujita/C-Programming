//WAP to find reverse of a matrix
#include<stdio.h>
int main()
{
    int arr[5],new[5],i,j,n=4;
    printf("Enter the elements of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
      new[n]=arr[i];
      n--;
    }
    printf("reverse form of array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",new[i]);
    }
    return 0;

}