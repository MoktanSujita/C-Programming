//WAP to find transpose of matrix
#include<stdio.h>
int main()
{
    int r,c;
    printf("entere the number of rows and column;\n");
    scanf("%d%d",&r,&c);
    int arr[r][c],tra[c][r];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            tra[j][i]=arr[i][j];
        }
    }
    printf("The original array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of array:\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",tra[i][j]);
        }
        printf("\n");
    }
    return 0;

}