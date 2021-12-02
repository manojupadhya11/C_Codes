#include<stdio.h>//header files for standard input and output
int main()
{
    
    int n, sum=0;  //initializing variables
    printf("Enter the first N natural number to calculate Sum\n "); //taking user input
    scanf("%d", &n);
    sum = (n*(n+1))/2;  //code to calculate the total sum
    printf("Sum of first %d natural number is %d",n, sum);  //printing the total sum
}
