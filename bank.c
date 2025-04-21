#include <stdio.h>

int main(void){
    int p, t, r = 5;
    float si, amount;

    printf("Enter the Principal and time ");
    scanf("%d %d", &p, &t);

    si = p*t*r/100;

    amount = p + si;

    float fa;
    if(p > 500){
        fa = amount + 100;
        printf("final amout is %f", fa);
    }else {
        printf("Total amount = %f", amount);
    }

}
