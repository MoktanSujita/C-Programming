//WAP to print the size of pointers of different data types 
#include <stdio.h>
#include <conio.h>
int main()
{
    //defining variables
    int a;
    float b;
    char c;
    //declaring pointer variables
    int *pa=&a;
    float *pb=&b;
    char *pc=&c;
 //using sizeof() function and printing the size of pointers
    printf("Size of pointer int:%d\n",sizeof(pa));
    printf("Size of pointer float:%d\n",sizeof(pb));
    printf("Size of pointer char:%d\n",sizeof(pc));
    return 0;
    
}