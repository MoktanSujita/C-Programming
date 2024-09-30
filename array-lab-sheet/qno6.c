//WAP to record marks and display it in decending order
#include<stdio.h>
int main()
{ 
    int n;
    printf("Enter the no of students:\n");
    scanf("%d",&n);
    int i,j,marks[n];
    printf("Enter the marks:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(marks[i]<marks[j])
            {
                int temp=marks[j];
                marks[j]=marks[i];
                marks[i]=temp;
            }
        }
    }
        printf("The marks in decending order:\n");
        for(i=0;i<n;i++)
        {
            printf("arr[%d]:%d\n",i,marks[i]);
        }
        printf("The maximum marks=%d\nMinimun marks=%d",marks[0],marks[n-1]);
    return 0;
}