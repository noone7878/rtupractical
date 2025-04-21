#include <stdio.h>

int main(void){
    int f;
    float c;

    printf("Fahrenheit to Celsius\n");
    printf("Enter value in degree Fahrenheit: ");
    scanf("%d", &f);

    c = (f - 32) * 5.0 / 9.0;

    printf("%d F is %.2f C\n", f, c);
}
