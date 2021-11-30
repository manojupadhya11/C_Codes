#include<stdio.h>//header files for standard input and output
int main()
{
    
    int n, sum=0;
    printf("Enter the first N natural number to calculate Sum\n ");
    scanf("%d", &n);
    sum = (n*(n+1))/2;
    printf("Sum of first %d natural number is %d",n, sum);
}
