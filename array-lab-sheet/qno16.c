//WAP to modify a matrix by multiplying each element by 3
#include<stdio.h>
#include<conio.h>
void modify(int arr[10]);
int main()
{
    int a[10],i;
    printf("enter the elements of array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    modify(a);
    return 0;
}
void modify(int arr[10])
{
    int i;
    for(i=0;i<10;i++)
    {
      arr[i]=arr[i]*3;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    getch();
}