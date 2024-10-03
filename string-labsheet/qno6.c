//WAP to print reverse of entered string
#include<stdio.h>
#include<string.h>
int main()
{
    char st[50];
    printf("Enter any string:");
    scanf("%s",st);
    printf("The reverse of the entered string is %s",strrev(st));
    return 0;

}