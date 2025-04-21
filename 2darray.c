#include <stdio.h>

int main(void){
    int i, j;


    int matrix[3][3];

    printf("Enter the elements: \n");
    for(i=0; i<3; i++){
        for (j=0; j<3; j++) {
            printf("matrix[%d][%d] = ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }


    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
