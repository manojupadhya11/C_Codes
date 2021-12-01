//Program to find greatest of two numbers 
#include<stdio.h>
int main(){
    int c,a,b=0;  //variables for taking input
    printf("Enter the first number ");
    scanf("%d",&a); //taking user input
    printf("Enter the second number ");
    scanf("%d",&b); //taking user input for second number
    printf("Enter the third number ");
    scanf("%d",&c); //taking user input for third number
    if(a>b && a>c){              //checking the condition 
        printf("%d is greatest ",a); 
    }
    else if(b>a && b>c){
        printf("%d is greatest ",b);
    }
    else{
        printf("%d is the greatest ",c);
    }
}