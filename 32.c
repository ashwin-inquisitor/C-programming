/*nput a character from user and check whether given character 
is alphabet, digit or special character using if else.*/

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if((ch>='a' && ch <= 'z') || (ch>='A' && ch<='Z')){
        printf("%c is a alphabet.", ch);
    }else if(ch>='0' && ch<='9'){
        printf("%c is a digit.", ch);
    }else{
        printf("%c is special character.", ch);
    }
    return 0;
}