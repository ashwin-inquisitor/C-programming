//Check leap year using if else.

#include<stdio.h>

int main(){
    int year;

    printf("Enter a year to check its leap year or not: ");
    scanf("%d", &year);

    if((year%4 == 0) && (year%100 == 0 ) || (year%400 == 0)){
        printf("Year is Leap year");
    }else{
        printf("Common year");
    }
    return 0;
}