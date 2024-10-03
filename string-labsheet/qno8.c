//WAP to print no of uppercase, lowercase and space entered by user
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int lo=0,up=0,sp=0;
    printf("Enter any string:");
    scanf("%[^\n]%*c",str);//takes space too
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            lo++;
        }
        else if(str[i]>=65 && str[i]<=90)
        {
            up++;
        }
        else if(str[i]==32)
        {
            sp++;
        }
    }
   printf("Uppercase string:%d\n Lowercase String:%d\n Space:%d ",up,lo,sp);
   return 0;
}