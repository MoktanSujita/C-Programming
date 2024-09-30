//wap to find sum of diagonal elements of 2 matrix
#include<stdio.h>
int main()
{
    int rc;
    printf("Enter the order of square matrix:");
    scanf("%d",&rc);
    int f[rc][rc],sum=0;
    int i,j;
    printf("Enter the elements of matrix:");
    for(i=0;i<rc;i++)
    {
        for(j=0;j<rc;j++)
        {
            scanf("%d",&f[i][j]);
        }
    }
    for(i=0;i<rc;i++)
    {
        sum+=f[i][i];
    }
    printf("The sum of diagonal elements is %d",sum);
    return 0;
}