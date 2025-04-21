#include <stdio.h>

int main(void){
    printf("****AREA****\n");
    char opr;
    int a, b, c, d, ans;
    printf("Find area of \n A. Square\n B. Triangle\n C. Circle\n D. Rectangle\nPick any one operation: ");
    scanf(" %c", &opr);

    switch (opr) {
        case 'A':
        printf("Enter the side of the square: ");
        scanf(" %d", &a);
        ans = a*a;
        printf("Area of the square is %d\n", ans);
        break;
        case 'B':
        printf("Enter the Base and Height of the Triange: ");
        scanf(" %d %d", &a, &b);
        ans = 0.5*a*b;
        printf("Area of the triangle is %d\n", ans);
        break;
        case 'C':
        printf("Enter the radius of the circle: ");
        scanf(" %d", &a);
        ans = 3.14*a*a;
        printf("Area of the circle is %d\n", ans);
        break;
        case'D':
        printf("Enter the length and breath of rectangle: ");
        scanf(" %d %d", &a, &b);
        ans = a*b;
        printf("Area of the rectangle is %d\n", ans);
        break;

    }


}
