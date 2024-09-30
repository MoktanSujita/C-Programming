#include<stdio.h>
int main()
{
    int n[10], sum = 0, pro = 1, max;

    printf("Enter any ten integer values:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }
    max = n[0];
    for(int i = 0; i < 10; i++)
    {
        sum += n[i];       
        pro *= n[i];       
        if(n[i] > max)     
        {
            max = n[i];
        }
    }

    float avg = sum / 10.0;  
    printf("Sum = %d\t Product = %d\t Average = %.2f\t Maximum = %d\n", sum, pro, avg, max);

    return 0;
}
