#include <stdio.h>

int main(void){
    int i, j, k=1, rows;
       printf("Enter the number of rows: ");
       scanf("%d", &rows);
       for (i = 1; i <= rows; ++i) {
          for (j = 1; j <= i; ++j) {

             printf("%d ", k);
             k++;
          }
          printf("\n");
       }
       return 0;
}
