//WAP to add elements of two array
#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter the no of rows and columns:");
    scanf("%d%d",&m,&n);
    int arr[m][n],arr2[m][n],sum[m][n];
    printf("Enter the elements of first array:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",(*(arr+i)+j));
        }
    }
    printf("Enter the elements of second array:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",(*(arr2+i)+j));
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;i<n;j++)
        {
          *(*(sum+i)+j)=*(*(arr+i)+j)+ *(*(arr2+i)+j);
        }
    }
    printf("The sum of array elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}
