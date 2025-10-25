//Input a character from user and check whether the given character is alphabet or not using if else.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("Character is alphabet.");
    }else{
        printf("Character is not alphabet.");
    }
    return 0;
}