//Program to check whether user inputted year is leap year or not
#include<stdio.h>
int main(){
    int leapyear = 0;
    printf("Enter the year to check whether it is leap year or not ");
    scanf("%d",&leapyear);
    if(((leapyear%4==0)&& (leapyear%100 !=0) || (leapyear%4==0))){
       printf("%d is a Leapyear ", leapyear);
    }else{
        printf("%d is not a Leap year ",leapyear);
     }
    }
