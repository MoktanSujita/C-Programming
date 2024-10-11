//WAP to display memory address occupied by variables
#include<stdio.h>
#include<conio.h>
int main()
{
    int a; //variable initialization
    int *pa=&a;//pointer to integer
    char c;//variable initialization
    char *pc=&c;//pointer to char
    float f; //variable initialization
    float *pf=&f;////pointer to float
    printf("Memory address \na:%d\t c:%d\t f:%d",*pa,*pc,*pf);
    return 0;
}