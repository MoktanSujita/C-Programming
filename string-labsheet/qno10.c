//WAP to compare two strings and print larger one
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str2[50];
    printf("Enter any two strings:");
    scanf("%s%s",str,str2);
    if(strcmp(str,str2)>0)//if first string is greater it returns value greater than 0
    {
        printf("The larger string:%s",str);
    }
    else if(strcmp(str,str2)<0)//if first string is smaller it returns value less than 0
    {
        printf("The larger string:%s",str2);
    }
    else  
    //if both are equal it returns 0
    {
        printf("Both strings are equal!");
    }
    return 0; 
}