/*Input week number(1-7) and print the corresponding day of week name using if else.*/

#include<stdio.h>

int main(){
    int week;
    printf("Enter week number(1-7): ");
    scanf("%d", &week);

    if(week == 1){
        printf("Monday");
    }else if(week == 2){
        printf("Tuesday");
    }else if(week == 3){
        printf("Wednesday");
    }else if(week == 4){
        printf("Thursday");
    }else if(week == 5){
        printf("Friday");
    }else if(week == 6){
        printf("Satarday");
    }else if(week == 7){
        printf("Sunday");
    }else{
        printf("Invalid input! Enter number between (1-7).");
    }
    return 0;
}