//Check positive, negative or zero using simple if or if else. 

#include<stdio.h>

int main(){
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Number is positive.");
    else if(num < 0)
        printf("Number is negative.");
    else
        printf("Number is ZERO.");

    return 0;
}