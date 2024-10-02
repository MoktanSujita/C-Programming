#include<stdio.h>
#include<string.h>
int main()
{
    char st[50];
    printf("Enter you name:");
    scanf("%s",st);
    strupr(st);
    printf("Your name in uppercase:%s!",st);
    return 0;
}