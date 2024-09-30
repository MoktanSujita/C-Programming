#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }

}
int sum(int x,int n)
{
   if(n==0)
   {
      return 0;
   }
   else
   {
    return(pow(x,n)/fact(n)+sum(x,n-1));
   }
}
int main()
{
    int x,n;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Ans:%d",1+sum(x,n));
    return 0;

}