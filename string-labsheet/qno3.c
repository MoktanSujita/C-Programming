#include<stdio.h>
#include<string.h>
int main()
{
    char st[50];
    printf("Enter you name in uppercase:");
    scanf("%s",st);
    strlwr(st);
    printf("Your name in lowercase:%s!",st);
    return 0;
}