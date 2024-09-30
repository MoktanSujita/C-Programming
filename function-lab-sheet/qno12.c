#include<stdio.h>
int sum(int a)
{
    if(a<=0)
    {
        return 0;
    }
    else{
        return a+sum(a-1);
    }
}
int main()
{
    int x=20;
    printf("the sum of first twenty numbers is %d",sum(x));
    return 0;
}