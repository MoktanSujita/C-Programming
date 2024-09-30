//WAP to calculate sum of row elements an dcolumn elements
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the no of rows:");
    scanf("%d",&r);
     printf("Enter the no of column:");
    scanf("%d",&c);
    int f[r][c],sumr=0,sumc=0;
    int i,j;
    printf("Enter the elements of matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&f[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

            sumr+=f[i][j];
        }
        printf("Sum of row[%d]:%d\t",i,sumr);
        sumr=0; 
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

            sumc+=f[j][i];
        }
        printf("Sum of column[%d]:%d\t",i,sumc);
        sumc=0; 
    }

    return 0;
}