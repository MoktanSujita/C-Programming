//WAP to find product of integer and float using function
#include<stdio.h>
float pro(int a,float b);
int main()
{
    int a;
    float b;
    printf("Enter any two number of integer and float datatype:");
    scanf("%d%f",&a,&b);
    printf("The product of two numbers is %.2f",pro(a,b));
    return 0;
}
float pro(int a,float b)
{
    return a*b;
}