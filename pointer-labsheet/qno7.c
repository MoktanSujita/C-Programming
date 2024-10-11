//WAP to convert upper case letter into lowercase using call by address or passing pointer into function
#include <stdio.h>
#include <string.h>
#include <conio.h>
void cas(char *arr);
int main()
{
    int n;
    printf("Enter the maximum length of string:");
    scanf("%d",&n);
    char arr[n];
    printf("Enter any string in uppercase letter:");
     scanf("%s",arr);
     cas(arr);
    return 0;
}
void cas(char *arr)
{
     printf("The string in lowercase:%s",strlwr(arr));
     getch();
}
