//WAP to find no of odd,even,positive, negative numbers in an array 
#include<stdio.h>
int main()
{ 
    int i,eve=0,odd=0,num[6],count=0,dis=0;
    printf("Enter the nums:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<6;i++)
    {
        
            if(num[i]>0)
            {
               count ++;
            }
            else if (num[i]<0)
            {
                dis++;
            }
            else if(num[i]%2==0)
            {
                eve++;
            }
            else if(num[i]%2!=0)
            {
                odd++;
            }
    }
        printf("Odd numbers=%d even numbers=%d Positive numbers=%d Negative numbers=%d",odd,eve,count,dis);
        return 0;
}