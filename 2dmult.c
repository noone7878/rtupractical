#include <stdio.h>

int main(void){
    int i, j, k;


    int matr1[3][3];
    int matr2[3][3];
    int mult[3][3];

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
            mult[i][j] = 0;
            for (k=0; k<3; k++) {
                mult[i][j] = mult[i][j] + matr1[i][k]*matr2[k][j];
            }
        }
    }


    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }


}
