#include <stdio.h>

int main(void){
    int i, j;


    int matr1[3][3];
    int matr2[3][3];
    int sum[3][3];

    printf("Enter the elements of matrix 1: \n");
    for(i=0; i<3; i++){
        for (j=0; j<3; j++) {
            printf("matrix[%d][%d] = ", i+1, j+1);
            scanf("%d", &matr1[i][j]);
        }
    }

    printf("Enter the elements of matrix 2: \n");
    for(i=0; i<3; i++){
        for (j=0; j<3; j++) {
            printf("matrix[%d][%d] = ", i+1, j+1);
            scanf("%d", &matr2[i][j]);
        }
    }

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            sum[i][j] = matr1[i][j] + matr2[i][j];
        }
    }

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }


}
