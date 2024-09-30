#include<stdio.h>
int power()
{
    int a,b;
    printf("Enter the base value:");
    scanf("%d",&a);
    printf("Enter the power value:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        a*=a;
    }
    return a;
}
int main()
{
    printf("Value of base to the power value is %d",power);
    return 0;
}