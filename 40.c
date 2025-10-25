/*Input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, 
calculate percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F*/

#include<stdio.h>

int main(){
    float math, phy, chem, bio, comp;
    float total, percentage;
    printf("Enter marks of five subject: ");
    scanf("%f%f%f%f%f", &phy,&chem,&bio,&math,&comp);

    total = phy + chem + bio + math + comp;
    percentage = (total / 500.0 ) * 100.0;

    printf("Percentage = %.2f\n", percentage);

    if(percentage >= 90){
        printf("Your grade is: A");
    }else if(percentage >= 80){
        printf("Your grade is: B");
    }else if(percentage >= 70){
        printf("Your grade is: C");
    }else if(percentage >= 60){
        printf("Your grade is: D");
    }else if(percentage >= 40){
        printf("Your grade is: E");
    }else{
        printf("Your grade is: F");
    }
    return 0;
}