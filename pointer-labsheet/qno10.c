//WAP to read matrix and find it's transpose
#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter the no of rows and no of column:");
    scanf("%d%d",&m,&n);
    int mat[m][n],tra[n][m];
    printf("Enter the elements of the array:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&*(*(mat+i)+j));
        }
    }
    printf("Before transposing the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d\t",*(*(mat+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           *(*(tra+j)+i)=*(*(mat+i)+j);
        }
    }
    printf("After transposing the matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           printf("%d\t",*(*(tra+i)+j));
        }
        printf("\n");
    }
    return 0;
    
}