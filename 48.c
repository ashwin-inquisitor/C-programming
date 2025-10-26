//Input a number and check positive negative or zero using switch case.

#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num > 0){
        case 1:
            printf("Number is positive.");
            break;
        case 0:
            switch(num < 0){
                case 1:
                    printf("Number is negative.");
                    break;
                case 0:
                    printf("Number is Zero.");
                    break;
            }
        break;
    }
    return 0;
}