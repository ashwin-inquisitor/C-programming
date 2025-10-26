//Input number from user and check whether the number is even or odd using switch case.

#include<stdio.h>

int main(){
    int num;
    printf("Enter number to check number is even or odd: ");
    scanf("%d", &num);

    switch(num%2){
        case 0:
            printf("%d is even.", num);
            break;
        case 1:
            printf("%d is odd.", num);
            break;
        default:
            printf("Invaild input! Please enter an integer.");
    }
    return 0;
}