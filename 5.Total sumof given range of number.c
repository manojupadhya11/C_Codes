//program to find sum in the given range
#include<stdio.h>
int main(){
    
    int i= 0, totalsum = 0;
    int startrange, endrange = 0;  //variables
    printf("Enter the start range ");
    scanf("%d", &startrange);
    printf("Enter the End Range ");
    scanf("%d", &endrange);    //taking range as input from user
    for(i=0; i<=endrange;i++){    //for loop for loop through all elements in the given range
        totalsum += i;
    }
    printf("The total sum of numbers in between the given range = %d",totalsum);
    return 0;
}