#include <stdio.h>

int main(void){
    int a[5], i, sum = 0;
    float avg;

    printf("Calculate average \n Enter 5 numbers\n");

    for (i = 0; i<5; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i<5; i++) {
        sum = sum + a[i];
    }
    printf("sum = %d\n", sum);

    avg = sum/5;

    printf("The average is = %.2f", avg);
}
