//Wap to find addition,subtraction,division,multiplication of any two numbers
#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int div(int a,int b)
{
    return a/b;
}
int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int a,b;
    printf("Enter amy two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Addition:%d\t Subtraction:%d\t Division:%d\t Multiplication:%d",add(a,b),sub(a,b),div(a,b),mul(a,b));
    return 0;
}