#include<stdio.h>//header files for standard input and output
int main()
{
    
    int n;
    printf("Enter the number to check whether it is positive or not!! \t");
    scanf("%d", &n);
    if(n == 0){
        printf("The number equal to zero"); //checcking condition for 0
    }
    else if(n > 0)   //Checking the condition for positive Number 
    {
        printf("%d is a positive Number", n);  // print positive Number
        
    }
    else {
       printf("%d is a negative number",n);   //print negative number
    }
}
