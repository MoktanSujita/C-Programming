//WAP to concatinate two strings without using library function strcat()
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("Enter the maximum no of string:");
    scanf("%d",&n);
    char str1[n+1],str2[n+1],cat[500];
    int j=0;
    printf("Enter the first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str2);
    strcpy(cat,str1);
    int l=strlen(str1);
    for(int i=l;i<500;i++)
    {
       cat[i]=str2[j];
       j++;
    }
    printf("The concatination of two strings:%s",cat);
    return 0;
    
}