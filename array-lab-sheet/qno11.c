//wap to make 2*3 matrix and print the elements
#include<stdio.h>
int main()
{
    int num[2][3],i,j;
    printf("Enter the elements of the array:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)

        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)

        {
            printf("%d\t",num[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}