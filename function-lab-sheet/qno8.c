//WAP to find sum of 1+2+3+4.....+n using function
#include<stdio.h>
int sum(int n)
{
    if(n=1)
    {
        return 1;
    }
    else
    {
    return n+sum(n-1);
    }
}
int main()
{
    int a;
    printf("Enter the last no of the series:");
    scanf("%d",&a);
    printf("the sum of the series:%d",sum(a));
    return 0;
}

