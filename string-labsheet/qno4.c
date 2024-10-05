//WAP to accept a string from user and toggle the case of alphabet 
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter the maximum length of string:");
    scanf("%d",&n);
    char str[n+1];//string includes a null character('\0')so +1
    printf("Enter the string:");
    getchar();//previous new line is deleted
    scanf("%[^\n]",str);//accepts space too
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]>=65 && str[i]<=90)//ASCII code of uppercase alphabets ranges 65-90
        {
            str[i]+=32;//converts into lowercase
        }
        else if(str[i]>=97 && str[i]<=122)//ASCII code of lowercase alphabets ranges 97-122
        {
            str[i]-=32;//converts into uppercase
        }
    }
    printf("The toggled string is :%s",str);
    return 0;

}