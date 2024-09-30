//wapto find multiplication of 2 matrices
#include <stdio.h>

int main()
{
    int r,c,r1,c1,i,j;
     printf("enter the number of rows and column of first matrix\n");
    scanf("%d%d",&r,&c);
     printf("enter the number of rows and column of first matrix\n");
    scanf("%d%d",&r1,&c1);

    
    int a[r][c],b[r1][c1],d[r][c1];
    if(r1==c && c1==r)
    {
         for (i = 0; i < r; i++) {
            for (j = 0; j < c1; j++) {
                d[i][j] = 0;
            }
        }
    // Input for first matrix elements
       printf("Enter the elements of the first matrix:\n");
        for(i = 0; i < r; i++) {
          for (j = 0; j < c; j++) {
              scanf("%d", &a[i][j]);
          }
        }
       
           printf("Enter the elements of the second matrix:\n");
         for (i = 0; i <r1 ; i++) {
             for (j = 0; j <c1; j++) {
                 scanf("%d", &b[i][j]);
             }
         }
     
         
         printf("Multiplication of the two matrices:\n");
         for ( i = 0; i < r; i++) {
             for (j = 0; j < c1; j++) {
                 for(int k=0;k<c;k++)
                 {
                     d[i][j]+=a[i][k]*b[k][j];
                 }
             }     
    
        }
         for(i=0;i<r;i++)
       {
           for(j=0;j<c1;j++)
           {
              printf("%d\t",d[i][j]);
            }
            printf("\n");
        }
    
    }
    else {
        printf("Multiplication not possible.");
    }

    return 0;
}

