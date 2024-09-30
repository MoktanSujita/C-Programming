//WAP to check if the number is prime or not
#include<stdio.h>
#include<conio.h>
void prime(int a);
int main()
{
    int x;
    printf("enter any number:");
    scanf("%d",&x);
    return 0;
}
void prime(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
             c++;
        }
    }
    if(c==2)
    {
        printf("The number is prime!");
    }
    else{
        printf("The number is not prime!");
    }
    getch ();
}