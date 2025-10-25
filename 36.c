/*Input side of a triangle and check whether triangle is valid or not using if else. */

#include<stdio.h>

int main(){
    int side1, side2, side3;

    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1,&side2,&side3);

    if((side1+side2 > side3) && (side2+side3 > side1) && (side1+side3 > side2)){
        printf("Triangle is valid.");
    }else{
        printf("Invlaid triangle!");
    }
    return 0;
}