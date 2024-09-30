//WAP to find sum of even elements and product of odd elements 
#include<stdio.h>
#include<conio.h>

void modify(int arr[],int n);
int main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    modify(a,n);
    return 0;
}
void modify(int arr[],int n)
{
    int i,sum=0,pro=1;
    for(i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      {
        sum+=arr[i];
      }
      else{
        pro*=arr[i];
      }
    }
    printf("The sum=%d product=%d",sum,pro);
    getch();
}