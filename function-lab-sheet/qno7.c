//WAP to display factorial using recursion
#include<stdio.h>
int factorial(int a)
{
    if(a==0 || a==1)
    {
        return 1;
    }
    else 
    {
        return a*factorial(a-1);
    }
}
int main()
{
    int x;
    printf("Enter any number:");
    scanf("%d",&x);
    printf("The factorial of the number is %d",factorial(x));
    return 0;
}