//Wap to exchange values using pointer
#include <stdio.h>
int main()
{
    int a=5;
    int *pa=&a;
    int s=6;
    int *ps=&s;
    printf("The values before swapping \n a:%d \t s:%d",a,s);
    int t=*pa;
    a=*ps;
    s=t;
    printf("\nThe values after swapping value \n a:%d\t s:%d",a,s);
    return 0;

}