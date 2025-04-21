#include <stdio.h>

int main(void){
    int arr1[5], arr2[5], sum[5], i;


    printf("Enter values of the array 1\n");
    for (i=0; i<5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter values of the array 1\n");
    for (i=0; i<5; i++) {
        scanf("%d", &arr2[i]);
    }

    //sum
    for (i=0; i<5; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("\n\n\n sum array: \n");
    for (i = 0; i<5; i++) {
        printf("%d\n", sum[i]);
    }
}
