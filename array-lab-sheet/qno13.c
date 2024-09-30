#include<stdio.h>
int main()
{
    int arr[100],n=1,c=0;
    for(int i=0;i<100;i++)
    {
        arr[i]=i+1;
    }
    printf("The prime numbers are:\n");
    for(int i=1;i<100;i++)
    {
      for(int j=1;j<=arr[i];j++)
       {
         if(arr[i]%j==0)
         {
            c++;
         }
        
        }
      if(c==2)
      {
          printf("%d\t",arr[i]);
      }
      c=0;
    }
    return 0;
}