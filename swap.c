#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    printf("switching........ \n");
    c = a;
    a = b;
    b = c;
    printf("Swaped values a = %d, b = %d\n", a, b);
}
