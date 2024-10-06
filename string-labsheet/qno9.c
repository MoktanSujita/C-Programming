#include<stdio.h>
#include<string.h>
int main()
{
    int n,vo=0;
    printf("Enter the maximum no of characters:");
    scanf("%d",&n);
    char s[n+1];
    printf("Enter any string:\n");
    scanf("%s",s);
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]==97|| s[i]==101|| s[i]==105|| s[i]==111|| s[i]== 117)
        {
            vo++;
        }
        else if(s[i]==65|| s[i]==69|| s[i]==73|| s[i]==79|| s[i]== 85)
        {
            vo++;
        }
    }
    printf("The no of vowels in the string is %d",vo);
    return 0;
}