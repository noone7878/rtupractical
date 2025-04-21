#include <stdio.h>

int main(void){
    int c;
    float f;

    printf("celsius to fahrenheit\n");
    printf("Enter value in degree celsius: ");
    scanf("%d", &c);
    f = (c*1.8)+32;
    printf("%d C is %.2f F", c, f);
}
