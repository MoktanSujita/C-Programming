//Wap to record age of n no of employees with dynamic memory allocation and count no of employees aged above 80
#include<stdio.h>
#include<conio.h>
int count(int *arr, int n);
int main()
{
    int n;
    int *arr;
    
    printf("Enter the no of employees:\n");
    scanf("%d",&n);
    arr=(int *)malloc(n* sizeof(int));
    printf("enter the ages of the employee:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=count(arr,n);
    printf("The no of employees above 80 yrs:%d",c);
    return 0;
}
int count(int *arr,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>80)
        {
            c++;
        }
    }
    return c;
}
