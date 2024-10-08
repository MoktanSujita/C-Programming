//WAP to read marks of n students and dsplay the top five marks
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of students:");
    scanf("%d",&n);
    int arr[n],i,j;
    int *parr=arr;//& is not required because array is already a pointer
    printf("Enter the marks of the students:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",parr+i);//reading the entered elements using pointer
    }
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(parr+i)<*(parr+j))//comparing the elements and shorting accordingly in decending order
           {
             int temp=*(parr +i);
             *(parr+i)=*(parr+j);
             *(parr+j)=temp;
            }
        }
    }
    printf("The top five marks:");
    for(i=0;i<5;i++)
    {
      printf("%d\t",*(parr+i));//printing the top five marks on console
    }
    return 0;
}