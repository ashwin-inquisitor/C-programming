//Find all roots of a quadratic equation using if else.

#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    float root1,root2, imaginary;
    float discriminat;
    printf("Enter values of a, b, c of quadratic equaction (aX^2+bX+c): ");
    scanf("%d%d%d", &a,&b,&c);

    discriminat = (b * b) -(4 * a * c);

    if(discriminat > 0){
        root1 = (-b + sqrt(discriminat)) / (2*a);
        root2 = (+b - sqrt(discriminat)) / (2*a);

        printf("Two distinct and real root exist: %.2f and %.2f.", root1, root2);
    }else if(discriminat == 0){
        root1 = root2 = -b / (2 * a);

        printf("Two equal and real roots exist: %.2f and %.2f.", root1,root2);
    }else if(discriminat < 0){
        root1 = root2 = -b / (2*a);
        imaginary = sqrt(-discriminat) / (2*a);

        printf("Two distinct complex roots exist: %.2f + i%.2f and %.2f - i%.2f", root1,imaginary,root2,imaginary);
    }else{
        printf("Invalid input!");
    }
    return 0;
}