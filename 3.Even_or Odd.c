#include<stdio.h>//header files for standard input and output
int main()
{
    
    int n;
    printf("Enter the number to check whether it is even or odd !! \t");
    scanf("%d", &n);
    if(n%2 == 0)   //Checking the condition for even  Number 
    {
        printf("%d is a even Number", n);  // print even Number
        
    }
    else {
       printf("%d is a odd number",n);   //print odd number
    }
}
