//Input cost price and selling price of a product and check profit or loss.

#include<stdio.h>

int main(){
    int cp, sp, amt;

    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);

    if(sp>cp){
        amt= sp - cp;
        printf("Profit = %d", amt);
    }else if(cp>sp){
        amt= cp - sp;
        printf("Loss = %d", amt);
    }else if(cp=sp){
        printf("Breakeven! no profit, no loss.");
    }else{
        printf("Invalid input!");
    }
    return 0;
}