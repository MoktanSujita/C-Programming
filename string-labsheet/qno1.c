//WAP to find length of a string without using strlen library function
#include <stdio.h>
#include <string.h>
int main()
{
    int n,p=0;
    printf("Enter the maximum no of string:");
    scanf("%d",&n);
    char str[n+1];
    printf("Enter any string:");
    getchar();//Clears the previous space entered through scanf
    scanf("%[^\n]",&str);//accepts space as a input too
    for(int i=0;str[i]!=0;i++)
    {
        p++;//counts the no of character and increases it accordingly
    }
    printf("The length of the string is %d",p);
    return 0;
}