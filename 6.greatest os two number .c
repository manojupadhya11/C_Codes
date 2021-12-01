//Program to find greatest of two numbers 
#include<stdio.h>
int main(){
    int a,b=0;  //variables for taking input
    printf("Enter the first number ");
    scanf("%d",&a); //taking user input
    printf("Enter the second number ");
    scanf("%d",&b); //taking user input for second number
    if(a>b){              //checking the condition 
        printf("%d is greatest ",a); 
    }else if(b>a){
        printf("%d is greatest ",b);
    }
    else{
        printf("both are equal ");
    }
}