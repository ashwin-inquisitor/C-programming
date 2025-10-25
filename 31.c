//Check whether an alphabet is vowel or consonant using if else. 

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("Character is vowel.");
    }else if ((ch>='a' && ch <= 'z') || (ch>='A' && ch<='Z')){
        printf("Character is consonant");
    }else{
        printf("Character is not alphabet.");
    }

    return 0;
}