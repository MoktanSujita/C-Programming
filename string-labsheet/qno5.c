//WAP to find if any string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    int n,l;
    printf("Enter the maximum no of string:");
    scanf("%d",&n);
    printf("Enter any string:");
    char str[n+1],rev[n+1];
    getchar();
    scanf("%[^\n]",str);
    l=strlen(str);//finds length of string
    for(int i=0;str[i]!=0;i++)
    {
      rev[l-1]=str[i];//assigning value in reverse order
      l--;
    }
    rev[l]='\0'; //Null to terminate string
    if(strcmp(rev,str)==0)//If the ascii value of both string is equal it returns 0 else non 0 value
    {
        printf("The entered string is palindrome!");
    }
    else{
        printf("It's not");
    }
    return 0;
}


    