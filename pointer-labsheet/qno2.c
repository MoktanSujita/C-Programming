//WAP to find sum of all the elements of an array
#include<stdio.h>
int main()
{ 
    int n;
    printf("Enter the no of array elements:");
    scanf("%d",&n);
    int arr[n],sum=0;//variable declaration
    int *parr=&arr;//pointer to array
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=*(parr+i);//finding sum using pointer
    }
    printf("The sum of the elements is %d",sum);
    return 0;

}