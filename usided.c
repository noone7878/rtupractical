#include <stdio.h>

int main(void){
    int i, j, k, rows;
       printf("Enter the number of rows: ");
       scanf("%d", &rows);
       for (i = 1; i <= rows; ++i) {
           for(k = 0; k <= rows - i; k++){
               printf(" ");
           }
          for (j = 1; j <= i; ++j) {

             printf("*");
          }
          printf("\n");
       }
       return 0;
}
