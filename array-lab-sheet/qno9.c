//WAP to record marks and find no of failed students and who achieved distinction
#include<stdio.h>
int main()
{ 
    int i,j,marks[6],count=0,dis=0;
    printf("Enter the marks:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<6;i++)
    {
        
            if(marks[i]<25)
            {
               count ++;
            }
            else if (marks[i]>45)
            {
                dis++;
            }
    }
        printf("Failed students=%d Distinction achieved=%d",count,dis);
        return 0;
}