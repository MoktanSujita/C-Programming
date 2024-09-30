//WAP to find factorial of a number using function
#include<stdio.h>
long int factorial(int a,int i)
{
    if(a<=1)
    {
        return 1;
    }
    else
    {
        for(int i=a;i>=a;i--)
        {
            a*=i;
        }
        return a;
    }
}
int main()
{
    int a,i;
    printf("Enter any number:");
    scanf("%d",&a);
    i=a;
    printf("the factorial of the number is %d",factorial(a,i));
    return 0;
}