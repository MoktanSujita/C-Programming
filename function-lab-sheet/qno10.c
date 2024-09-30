#include<stdio.h>
int power(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    else{
        
        return a*power(a,b-1);
    }
    
}
int main()
{
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("The value of a raised to power of b:%d",power(a,b));
    return 0;
}