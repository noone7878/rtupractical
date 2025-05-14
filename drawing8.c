#include <stdio.h>

int main() {
    for (int i = 0; i < 4; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < 4 - i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
