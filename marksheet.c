#include <stdio.h>

int main(){
    float a, b, c, d, e;
    float f;


    printf("Enter Maths marks\n");
    scanf("%f", &a);
    printf("Enter Chemistty marks\n");
    scanf("%f", &b);
    printf("Enter Physics marks\n");
    scanf("%f", &c);
    printf("Enter BEE marks\n");
    scanf("%f", &d);
    printf("Enter C marks\n");
    scanf("%f", &e);

    f = (a+b+c+d+e)/5;

    printf("the Percentage marks %f", f);
}
