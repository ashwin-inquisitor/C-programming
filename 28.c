//Check whether a number is even or odd using if else.

#include<stdio.h>

int main(){
    int num;

    printf("Enter number to check its odd or even: ");
    scanf("%d", &num);

    if(num%2 ==0){
        printf("Number is even.");
    }
    else{
        printf("Number is odd.");
    }
    return 0;
}