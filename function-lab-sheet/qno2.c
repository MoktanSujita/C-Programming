//WAP to find largest among three numbers
#include<stdio.h>
int larg(int a,int b,int c)
{
    if(a>b && b>c)
    {
        return a;
    }
    else if(b>a && a>c)
    {
        return b;
    }
    else {
        return c;
    }
}
int main()
{
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("The largest number among three is %d",larg(a,b,c));
    return 0;
}