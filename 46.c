//Input two numbers from user and find maximum between two numbers using switch case.

#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter two distinct number: ");
    scanf("%d%d", &num1,&num2);

    switch(num1 > num2){
        case 0:
            printf("%d is maximum.", num2);
            break;
        case 1:
            printf("%d is maximum.", num1);
        default:
            printf("Invalid input! Please enter an integer.");
    }
    return 0;
}