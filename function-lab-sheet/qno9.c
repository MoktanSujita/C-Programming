//WAP to find fibonacci series using recursive function
#include<stdio.h>
int fibonacci(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return (fibonacci(a-1)+fibo(a-2));
    }

}
int main()
{
    int a;
    printf("Enter the last term of fibonacci series:");
    scanf("%d",&a);
    printf("The fibonacci series:\n");
    for(int i=0;i<a;i++)
    {
        printf("%d\t",fibonacci(a));
    }
    return 0;
}