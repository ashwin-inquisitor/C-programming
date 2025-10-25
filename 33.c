/*Input character from user and check whether character 
is uppercase or lowercase alphabet using if else. */

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z'){
        printf("%c is uppercase alphabet.", ch);
    }else if(ch>='a' && ch<='z'){
        printf("%c is smallercase allphabet.", ch);
    }else{
        printf("%c is not a alphabet.",ch);
    }
    return 0;
}