//WAP to sort arrray elements using dynamic memory allocation
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    int arr[n],i,j;
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&*(arr+i));// input elements into array 
    }
    //bubble sort algorithm
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
           if(*(arr+i)<*(arr+j))
           {
             int temp=*(arr+i);
             *(arr+i)=*(arr+j);
             *(arr+j)=temp;
           }
        }  
    }
    //displaying the shorted list 
    printf("The elements in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(arr+i));
    }
    return 0;
}