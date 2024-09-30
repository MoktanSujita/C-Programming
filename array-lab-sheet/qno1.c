//WAP to read 10 integers from keyboard and display it
#include<stdio.h>
int main()
{
    int num[10];
    printf("Enter any ten integer values:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The values in array are:\n");
    for(int i=0;i<10;i++)
    {
        printf("num[%d]=%d\n",i,num[i]);
    }
    return 0;
}