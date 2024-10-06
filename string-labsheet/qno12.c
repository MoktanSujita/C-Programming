//WAP to sort 10 names in alphabetical order
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][500],s[500];//2D array for name
    printf("Enter the names:");
    for(int i=0;i<10;i++)
    {
        scanf("%s",name[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(name[i],name[j])>0)//Comparing strings
            {
                strcpy(s,name[i]);//swaping the values
                strcpy(name[i],name[j]);
                strcpy(name[j],s);
            }
        
        }
       
    }
    printf("Name in alphabetical order:\n");
     for(int i=0;i<10;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}